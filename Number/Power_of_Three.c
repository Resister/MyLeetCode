//
//  Power_of_Three.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isPowerOfThree(int n) {
    
    if(n == 0)
    {
        return false;
    }
    
    if(n==1 || n==3 || n==9)
    {
        return true;
    }
    //9以下只有1，3，9，3的阶乘，用9去验证更快
    if(n%9==0)
    {
        return isPowerOfThree(n/9);
    }
    
    return false;
}
