//
//  Single_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int singleNumber(int* nums, int numsSize) {
    
    int count = 0;
    for(int i = 0;i<numsSize;i++)
        
        //相同的数都异或成0，0和单独的数异或还是本身；
        count = count^nums[i];
    
    
    return count;
    
}
