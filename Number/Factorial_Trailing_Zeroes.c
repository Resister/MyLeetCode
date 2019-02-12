//
//  Factorial_Trailing_Zeroes.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int trailingZeroes(int n) {
    int result = 0;
    //不只有5（一个0的情况），还有5的阶乘，5*5（两个0的情况），5*5*5（三个0的情况），5*5*5*5（四个0的情况）。。。。。。。
    for(long long i=5; n/i>0; i*=5){
        result += (n/i);
    }
    return result;
}
