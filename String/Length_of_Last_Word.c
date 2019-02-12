//
//  Length_of_Last_Word.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int lengthOfLastWord(char* s) {
    
    int len = strlen(s);
    
    int count = 0, last = 0 ,i = 0;
    //最后一个字符的长度
    for(i = 0;i < len;i++)
    {
        if(s[i] == ' ')
        {
            if(count)
            {
                last = count;
                count = 0;
            }
        }
        else
        {
            count++;
        }
    }
    //如果没有空格
    if(count)
    {
        last = count;
    }
    
    return last;
    
    
}
