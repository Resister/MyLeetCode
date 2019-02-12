//
//  Longest_Harmonious_Subsequence.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

//子序列就好，不一定要连续
int cmp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int findLHS(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);//先快排
    int ret=0,i=0,j=0;
    // int count=1;
    for(i=0;i<numsSize;i++){
        int count=1;       //每个每次单独统计
        // int tmp=nums[i];
        for(j=i+1;j<numsSize;j++){
            if((nums[j]-nums[i])<=1)  //减自己相同的
                count++;    //连续就继续加
            else break;    //只是判断旁边的一个，不连续就跳出
        }
        if(count>ret && nums[j-1]-nums[i]==1) //每个数的差值刚好是1，而且最多的个数统计
            ret=count;
    }
    return ret;
}
