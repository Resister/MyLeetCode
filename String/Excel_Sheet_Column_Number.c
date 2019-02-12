//
//  Excel_Sheet_Column_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int titleToNumber(char* s) {
    
    int len = strlen(s);
    
    int sum = 0;
    
    for(int i = 0; i <len; i++)
    {
        //独自完成，惊喜
        sum = sum + (s[i]-'A' + 1) * pow(26,len - 1 - i);
    }
    
    return sum;
}
