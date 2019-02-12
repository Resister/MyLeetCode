//
//  Find_the_Difference.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

char findTheDifference(char* s, char* t) {
    
    int result,i;
    int s_len = strlen(s);
    int t_len = strlen(t);
    
    //X ^ X = 0
    //X ^ 0 = X
    //相同的抵消变0，单独的和0异或，还是单独的
    
    for(i = 0;i < s_len;i++)
    {
        result ^= s[i];
    }
    
    for(i = 0;i < t_len;i++)
    {
        result ^= t[i];
    }
    
    return (char)result;
    
}
