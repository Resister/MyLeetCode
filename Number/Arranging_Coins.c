//
//  Arranging_Coins.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int arrangeCoins(int n) {
    int sum = 1;
    while(n >= sum)
    {
        n -= sum;
        sum++; //减一阶再减下一阶
    }
    
    return (sum - 1);  //假如不够是返回上一阶的阶数，而不是补足的数量（数量即阶数）
}
