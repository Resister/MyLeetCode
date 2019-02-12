//
//  Valid_Anagram.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isAnagram(char* s, char* t) {
    if(s==NULL && t==NULL)
        return true;
    
    int s_len = strlen(s);
    int t_len = strlen(t);
    
    if(s_len != t_len)
        return false;
    //统计一加一减，如果没有相同的抵消就会变负，
    int a[26]={0};
    for(int i=0;i<s_len;i++){
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }
    
    for(int i=0;i<26;i++){
        if(a[i]<0)
            return false;
    }
    return true;
}
