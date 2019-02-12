//
//  Two_Sum.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int* twoSum(int* nums, int numsSize, int target) {
    
    int *T_arrary = (int*)malloc(2*sizeof(int));
    
    for(int j = 0;j < numsSize;j++)
    {
        for(int i = j+1;(i < numsSize && j != i) ;i++)
        {
            int T = nums[j] + nums[i];
            if(T == target)
            {
                T_arrary[0] = j;
                T_arrary[1] = i;
            }
            
        }
    }
    
    return T_arrary;
}
