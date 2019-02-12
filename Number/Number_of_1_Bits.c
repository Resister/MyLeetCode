//
//  Number_of_1_Bits.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int hammingWeight(uint32_t n) {
    
    int m = 0;
    
    //32位二进制数，一个个退下来，与1，双1，就++
    for (int i = 0; i < 32; i++, n >>= 1) {
        
        if(n & 1 == 1)
        {
            m++;
        }
        
    }
    return m;
    
}
