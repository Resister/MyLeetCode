//
//  Minimum_Moves_to_Equal_Array_Elements.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int minMoves(int* nums, int numsSize) {
    
    int minNum=nums[0];
    int minTotalMoves=0;
    
    for(int i=1;i<numsSize;++i)
    {
        minNum=minNum>nums[i]?nums[i]:minNum;  //找出最小值
    }
    for(int i=0;i<numsSize;++i)
    {
        minTotalMoves+=nums[i]-minNum;  //每个值相对于最小值累加的差和
    }
    
    return minTotalMoves;
    
}
