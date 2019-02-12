//
//  Power_of_Four.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isPowerOfFour(int num) {
    
    if(num == 0)
    {
        return false;
    }
    
    if(num == 1 || num == 4 || num == 16)
    {
        return true;
    }
    
    if(num%16 == 0)
    {
        return isPowerOfFour(num>>4);
    }
    
    return false;
}
