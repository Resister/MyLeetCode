//
//  Remove_Element.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int removeElement(int* nums, int numsSize, int val) {
    
    int k = 0;
    
    for(int i = 0 ; i < numsSize ; i++)
    {
        if(nums[i] != val)
        {
            //在不同之间，弹出剩下的
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}
