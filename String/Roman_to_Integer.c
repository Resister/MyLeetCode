//
//  Roman_to_Integer.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int getValue(char s)
{
    // I             1
    // V             5
    // X             10
    // L             50
    // C             100
    // D             500
    // M             1000
    switch(s)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    
    return 0;
}


int romanToInt(char* s) {
    int sum = 0;
    
    int len = strlen(s);
    
    for(int i = 0; i < len; i++)
    {
        if(i+1<len && (getValue(s[i]) < getValue(s[i+1])))
        {
            sum += getValue(s[i+1]) - getValue(s[i]);
            i++;
        }
        else
        {
            sum += getValue(s[i]);
        }
    }
    
    return sum;
}
