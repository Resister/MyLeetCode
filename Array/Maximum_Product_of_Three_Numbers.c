//
//  Maximum_Product_of_Three_Numbers.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//
//数组内最大三个数乘积
int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int maximumProduct(int* nums, int numsSize) {
    
    qsort(nums,numsSize,sizeof(int),cmp); //快速排序
    
    int head = nums[0]*nums[1];
    int til = nums[numsSize-2]*nums[numsSize-3];
    
    if(head>til){
        return head*nums[numsSize-1];
    }
    else{
        return nums[numsSize-1]*til;
    }
    
}
