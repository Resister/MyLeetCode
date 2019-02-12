//
//  Longest_Continuous_Increasing_Subsequence.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int findLengthOfLCIS(int* nums, int numsSize) {
    
    if (numsSize == 0)
        return 0;
    
    int count = 1;
    int MaxCount = 0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]<nums[i+1]){
            count++;
        }
        else{
            if(count>MaxCount){
                MaxCount=count;
            }
            count=1;
        }
    }
    //如果数组全递增
    if(count > MaxCount){
        MaxCount=count;
    }
    
    return MaxCount;
    
    
    // if (numsSize == 0)
    //     return 0;
    // int longest = 0;
    // int continuous = 1;
    // for (int i = 1; i < numsSize; i++){
    //     if (nums[i] > nums[i-1]){
    //         ++continuous;
    //     } else {
    //         if (continuous > longest){
    //             longest = continuous;
    //         }
    //         continuous = 1;
    //     }
    // }
    // if (continuous > longest){
    //     longest = continuous;
    // }
    // return longest;
    
}
