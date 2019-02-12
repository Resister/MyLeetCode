//
//  Longest_Common_Prefix.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

char* longestCommonPrefix(char** strs, int strsSize) {
    
    if(strsSize == 0)
    {
        return "";
    }
    else if(strsSize == 1)
    {
        return strs[0];
    }
    
    int i,j;
    
    for(i = 1;i < strsSize;i++)
    {
        for(j = 0;strs[0][j] != '\0';j++)
        {
            if(strs[i][j] != strs[0][j])
            {
                strs[0][j] = '\0';
                if(j == 0)
                {
                    return "";
                }
                break;
            }
        }
    }
    
    return strs[0];
    
}
