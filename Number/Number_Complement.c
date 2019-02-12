//
//  Number_Complement.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int findComplement(int n) {
    unsigned int x = 1;
    // while((x = x<<1) <= n);
    while(x <= n)
    {
        x = x<<1; // *2,比n大一位的全1
    };
    return (x-1)-n; // 全1减n正好反转
}
