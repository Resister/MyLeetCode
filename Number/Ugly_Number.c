//
//  Ugly_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isUgly(int num) {
    
    // for (int i=2; i<6 && num; i++)
    // while (num % i == 0)
    //     num /= i;
    // return num == 1;
    
    //why must &&num or time limit exceeded
    //&&num～非零
    for(int i = 2;i < 6 && num;i++)
    {
        while(num%i == 0)
        {
            num /= i;
        }
    }
    
    return num == 1;
}
