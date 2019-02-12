//
//  Valid_Perfect_Square.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isPerfectSquare(int num) {
    
    // if(sqrt(num) == (int)sqrt(num))
    
    //     long min = 1;
    //     long max = (1 << 16);//因为int是2^32
    //     long mid;
    //     long num2, prod;
    
    //     num2 = num;
    
    if(num<1)
    {
        return false;
    }
    if(num==1)
    {
        return true;
    }
    int left = 0,right = num*0.5;
    
    while (left <= right) {
        
        long mid = (left+right)*0.5;
        long val = mid*mid;
        if(val == num)
        {
            return true;
        }
        else if(val > num)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    
    return false;
}
