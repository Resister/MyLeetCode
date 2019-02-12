//
//  Reverse_String.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

char* reverseString(char* s) {
    
    int i = 0;
    char t;
    int j = strlen(s)-1;
    
    while(j > i)
    {
        //交换
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        
        i++;
        j--;
    }
    
    return s;
}
