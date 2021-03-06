//
//  Non-decreasing_Array.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool checkPossibility(int* nums, int numsSize) {
    
    // int count=0;
    // for(int i=0;i<numsSize-1;i++){
    //     if(nums[i]>nums[i+1])
    //     {
    //         count++;
    //     }
    // }
    // if(count>1){
    //     return false;
    // }
    // else{
    //     return true;
    // }
    
    //由小到大，可以等于～
    int flag=1, i;
    for(i=0;i<numsSize-1;i++){
        if(nums[i]>nums[i+1]){
            if(flag){
                //对于序列abc,如果是首次遇到b>c,进行一次修改，修改原则：
                //①如果a>c,则必须增大c的值为b;大于大于，
                //②如果a<c,考虑到c后面的元素不产生副作用，选择把b的值减小为a；
                //③修改flag的值；
                //④如果再次遇到b>c,考虑到已经进行了一次修改操作，直接返回false;
                if(nums[i+1]<(i?nums[i-1]:0))
                    nums[i+1]=nums[i];
                else
                    nums[i]=nums[i+1];
                flag=0;
                continue;
            }
            return false;
        }
    }
    return true;
}
