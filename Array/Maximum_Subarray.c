//
//  Maximum_Subarray.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int maxSubArray(int* nums, int numsSize) {
    
    int i = 0, currSum = 0;
    
    int maxSum = nums[0];
    
    for(i = 0;i < numsSize;i++)
    {
        //如果是负数，变小，就看看加上负数的和是不是比下一个数还小，还小就干脆才下一个数重新开始
        //除非currSum是负数才从下一个开始，
        currSum = (nums[i] > currSum + nums[i] ? nums[i] : currSum + nums[i]);
        maxSum = (maxSum > currSum) ? maxSum : currSum;
    }
    
    return maxSum;
}
