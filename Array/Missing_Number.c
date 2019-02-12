//
//  Missing_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int missingNumber(int* nums, int numsSize) {
    
    // XOR Properties:
    // i)  Any number XORed with itself results in 0
    // ii) Any number XORed with 0 results in number itself
    
    int i = 0, result = 0;
    
    //0到numSize区间的所有数，和nums里面的数一起异或，相同的都变成零，剩下的弹出就是空缺的那个。
    //或者0到numSize区间求和，减去nums的和，得到的也是空缺的数值；
    for (i = 0; i < numsSize; i++)
    {
        result^=(i+1)^nums[i];
    }
    
    return result;
}
