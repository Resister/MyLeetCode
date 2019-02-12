//
//  Hamming_Distance.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int hammingDistance(int x, int y) {
    
    //原始版本
    //     int dist = 0;
    //     unsigned  val = x ^ y;
    
    //     // Count the number of bits set
    //     while (val != 0)
    //     {
    //         // A bit is set, so increment the count and clear the bit
    //         dist++;
    //         val &= val - 1;
    //     }
    
    //     // Return the number of differing bits
    //     return dist;
    
    //实际上就是对比x和y每个字符的不同，如果是整型就是二进制，异或不同就变成1
    //no of places where they are different ^ is 1
    int a=x^y;
    int ans=0;
    //x与y异或，统计a中1的数量
    while(a)
    {
        if(a&1)
            ans++;
        a=a>>1;
    }
    return ans;
}
