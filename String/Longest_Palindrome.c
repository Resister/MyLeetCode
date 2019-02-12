//
//  Longest_Palindrome.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int longestPalindrome(char* s) {
    int a[52]={0};
    int len=strlen(s);
    int result=0;
    for(int i=0;i<len;i++)
    {
        //统计分别有多少个字母
        if(s[i]>'Z')
        {a[s[i]-'a'+26]++;}
        else
        {a[s[i]-'A']++;}
    }
    for(int i=0;i<52;i++)
    {
        if(a[i]>1)
        {
            if(a[i]%2==0)
            {result=result+a[i];}
            else
            {result=result+a[i]-1;}
        }
    }
    if(result<len)
    {result=result+1;}
    return result;
}
