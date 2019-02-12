//
//  Binary_Search.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int search(int* nums, int numsSize, int target) {
    
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target)
        {
            return i;
        }
    }
    
    return -1;
}
