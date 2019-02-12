//
//  Detect_Capital.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool detectCapitalUse(char* word) {
    
    int i,len=strlen(word),small=0,big=0;
    for(i=0;i<len;i++)
    {
        if((word[i]<='Z'))
            big++;
        else
            small++;
    }
    if(big==len) //全部大写～
        return true;
    if(small==len) //全部小写～
        return true;
    if(big==1&&len>1&&word[0]<='Z') //只有一个大写而且是第一位～
        return true;
    return false;
}
