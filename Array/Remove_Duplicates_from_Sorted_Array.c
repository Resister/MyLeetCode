//
//  Remove_Duplicates_from_Sorted_Array.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int removeDuplicates(int* nums, int numsSize) {
    
    int k = 0;
    
    if(numsSize == 0)
    {
        return 0;
    }
    
    for(int i = 1;i<numsSize;i++)
    {
        if(nums[i] != nums[k])
        {
            k++;
            //记住不同的位置，不同才换
            nums[k] = nums[i];
        }
    }
    
    return k + 1;
}
