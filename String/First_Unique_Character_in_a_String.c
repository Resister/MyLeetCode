//
//  First_Unique_Character_in_a_String.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int firstUniqChar(char* s) {
    
    int s_len = strlen(s);
    
    int a[123] = {0};
    
    for(int i = 0;i < s_len;i++)
    {
        //统计重复的个数
        a[s[i]]++;
    }
    
    for(int i = 0; i < s_len; i++)
    {
        if(a[s[i]] == 1)
        {
            return i;
        }
    }
    
    return -1;
    
}
