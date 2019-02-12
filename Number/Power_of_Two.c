//
//  Power_of_Two.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isPowerOfTwo(int n) {
    
    if(n == 0)
    {
        return false;
    }
    //内重复判断
    while(1)
    {
        if(n == 1)
        {
            return true;
        }
        //反面中出
        if(n %2 != 0)
        {
            return false;
        }
        
        n = n >> 1;
    }
}
