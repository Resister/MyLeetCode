//
//  Maximum_Average_Subarray_I.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

double findMaxAverage(int* nums, int numsSize, int k) {
    
    //     if(numsSize==1){
    //         return nums[0];
    //     }
    
    //     int Max=0;
    //     int Sum=0;
    //     for(int i=0;i<numsSize-k+1;i++){
    
    //         for(int j=0;j<k;j++)
    //         {
    //             Sum+=nums[i+j];
    //         }
    
    //         if(Max<Sum){
    //             Max=Sum;
    //         }
    //         Sum=0;
    //     }
    
    //     return (double)Max/(double)k;
    
    //滑动窗口法
    
    int total = 0;
    int i = 0;  //i要累加
    //先把前面四个加在一起，
    for(; i < k; i++) {
        total += nums[i];
    }
    
    int best = total;
    //好机智喔，尾增多一个，头就去掉一个，始终保持k个，然后比较出最大
    for(; i < numsSize; i++) {
        total += nums[i] - nums[i - k];
        best = total>best?total:best;
    }
    return best / (double) k;
}
