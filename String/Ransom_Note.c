//
//  Ransom_Note.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool canConstruct(char* ransomNote, char* magazine) {
    
    int len1 = strlen(ransomNote);
    int len2 = strlen(magazine);
    int A[26]={0} , B[26]={0} ,i;
    
    for(i=0 ; i<len1 ; i++){
        A[ransomNote[i]-'a']++;
    }
    
    for(i=0 ; i<len2 ; i++){
        B[magazine[i]-'a']++;
    }
    
    for(i=0;i<26;i++)
    {
        if(A[i]>B[i])
        {
            return false;
        }
    }
    
    return true ;
    
}
