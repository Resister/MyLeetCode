//
//  Third_Maximum_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int thirdMax(int* nums, int numsSize) {
    int i=0, count=0;
    long min, mid, max;
    min=mid=max=LONG_MIN;
    //不明不白，为了消掉相同，始终保持前三位
    for(i=0; i<numsSize; i++)
    {
        if(nums[i]==max || nums[i]==mid)
            continue;
        if(nums[i] > max){
            min=mid;
            mid=max;
            max=nums[i];
            count++;
        }
        else if(nums[i] > mid)
        {
            min = mid;
            mid = nums[i];
            count++;
        }
        else if(nums[i] >= min)
        {
            min = nums[i];
            count++;
        }
    }
    if (count>=3)
    {
        return min;
    }   else {
        return max;
    }
    
}
