//
//  Valid_Palindrome.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isPalindrome(char* s) {
    
    int len = strlen(s);
    
    int i = 0;
    
    if(len==0||len==1)
    {
        return true;
    }
    
    int left=0, right=len-1;
    // 大写转小写
    for(int i=0;i<len;i++) {
        char ch = s[i];
        if(ch>='A'&&ch<='Z') ch = 'a' + ch - 'A';
        s[i] = ch;
    }
    while(left<right) {
        //一头一尾夹逼
        char l = s[left++];
        char r = s[right--];
        while(!((l>='a'&&l<='z')||(l>='0'&&l<='9'))&&left<len) {
            l = s[left++];
        }
        while(!((r>='a'&&r<='z')||(r>='0'&&r<='9'))&&right>0) {
            r = s[right--];
        }
        if(((l>='a'&&l<='z')||(l>='0'&&l<='9'))&&((r>='a'&&r<='z')||(r>='0'&&r<='9'))&&r!=l) {
            return false;
        }
    }
    return true;
}
