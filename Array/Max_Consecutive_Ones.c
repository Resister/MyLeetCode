//
//  Max_Consecutive_Ones.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    
    //最大的连续1
    int count = 0;
    int Maxcount = 0;
    for(int i = 0;i<numsSize;i++)
    {
        if(nums[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        
        if(count > Maxcount)
        {
            Maxcount = count;
        }
    }
    
    return Maxcount;
    
}
