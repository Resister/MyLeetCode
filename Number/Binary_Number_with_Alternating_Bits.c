//
//  Binary_Number_with_Alternating_Bits.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool hasAlternatingBits(int n) {
    
    return !((n ^= n/4) & n-1);
    
    //假如本身是间隔数
    //   000101010
    // ^ 000001010
    // = 000100000
    
    //   000100000
    //  &000101001
    //  =000100000
}
