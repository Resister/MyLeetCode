//
//  House_Robber.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

#define max(a, b) (((a) > (b)) ? (a) : (b))

int rob(int* nums, int numsSize) {
    int i = 0, a = 0, b= 0;
    for(i = 0; i < numsSize; i++) {
        //用奇偶来隔开选中后的，然后记录加下次的奇偶谁大，从中选取，
        if(i&1)
            //1true(存在)，0false(空)
            //奇数
            b = max(a, b + nums[i]);
        else
            //偶数
            a = max(a + nums[i], b);
    }
    return max(a, b);
}
