//
//  Reverse_Bits.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//


uint32_t reverseBits(uint32_t n) {
    
    uint32_t m = 0;
    for (int i = 0; i < 32; i++, n >>= 1) {
        m <<= 1;
        m |= n & 1;
    }
    return m;
    
}
