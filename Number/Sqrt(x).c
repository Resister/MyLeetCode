//
//  Sqrt(x).c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int mySqrt(int x) {
    
    float x1 = x;
    
    float xhalf = 0.5f * x1;
    
    int i = *(int*)&x1;           // get bits for floating VALUE
    i = 0x5f3759df - (i>>1);     // gives initial guess y0
    x1 = *(float*)&i;             // convert bits BACK to float
    x1 = x1*(1.5f - xhalf*x1*x1);    // Newton step, repeating increases accuracy
    x1 = x1*(1.5f - xhalf*x1*x1);    // Newton step, repeating increases accuracy
    x1 = x1*(1.5f - xhalf*x1*x1);    // Newton step, repeating increases accuracy
    
    int result = 1 / x1;
    
    if(result * result > x)
    {
        result--;
    }
    
    return result;
}
