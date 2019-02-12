//
//  Add_Digits.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int addDigits(int num) {
    
    int sum = 0;
    
    while(num * 0.1 >= 1.0)
    {
        sum = num * 0.1 + num % 10;
        num = sum;
    }
    
    return num;
    
}
