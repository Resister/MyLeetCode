//
//  Implement_strStr().c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int strStr(char* haystack, char* needle) {
    
    int hay_len = strlen(haystack);
    int needle_len = strlen(needle);
    int i = 0, j = 0;
    
    while(i < hay_len && j < needle_len)
    {
        if(haystack[i] == needle[j])
        {
            i++;
            j++;
        }
        else
        {
            //知道模式串第j位不合适，减回去一起走的，再前进主串下一个
            i = i - j + 1;
            
            j = 0;
            
        }
    }
    
    if(j == needle_len)
    {
        return i - j;
    }
    else
    {
        return -1;
    }
    
}
