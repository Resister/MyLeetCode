//
//  Move_Zeroes.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

void moveZeroes(int* nums, int numsSize) {
    
    int count = 0, j = 0;
    //数出有几个非零
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] != 0)
        {
            count++;
        }
    }
    //非零往前排
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    //后面全置零
    for(int i = count;i < numsSize;i++)
    {
        nums[i] = 0;
    }
    
}
