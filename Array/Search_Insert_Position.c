//
//  Search_Insert_Position.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int searchInsert(int* nums, int numsSize, int target) {
    
    int i = 0;
    //第一次全靠自己
    for(i = 0;i < numsSize;i++)
    {
        if(target == nums[i])
        {
            return i;
        }
        else if(target < nums[i])
        {
            return i;
        }
    }
    
    return numsSize;
}
