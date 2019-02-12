//
//  Perfect_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool checkPerfectNumber(int num) {
    
    int sum=1, dig=3;
    for(int i=2; i<dig; i++)
    {
        dig=num/i;  //从一半去找
        if(num%i ==0)
        {
            if(dig == i) //开平方，算一个就行了
                sum=sum+i;
            else
                sum=sum+i+dig;
        }
    }
    
    if ( (sum==num) && (num!=1) )
        return true;
    else
        return false;
}
