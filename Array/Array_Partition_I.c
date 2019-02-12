//
//  Array_Partition_I.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int Min(int a, int b)
{
    int c;
    c=a>b?b:a;
    return c;
}
//返回的是判别值，正负零
int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int arrayPairSum(int* nums, int numsSize) {
    
    int sum = 0;
    
    qsort(nums,numsSize,sizeof(int),cmp);
    
    for(int i=0;i<numsSize/2;i++){
        
        sum = sum + Min(nums[i*2],nums[i*2+1]);
        
    }
    
    return sum;
    
}
