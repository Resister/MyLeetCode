//
//  Reverse_Vowels_of_a_String.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int isVowels(char c){
    char vowels[6] = {"aeiou"};
    int i;
    for(i = 0; i < 5; i++){
        if(c == vowels[i] || c + 32 == vowels[i]){
            return 1;
        }
    }
    return 0;
}
//完美
char* reverseVowels(char* s) {
    
    int i = 0;
    char tmp;
    int j = strlen(s) - 1;
    
    while(i<j)
    {
        if(!isVowels(s[i]))
        {
            i++;
            continue;
        }
        
        if(!isVowels(s[j]))
        {
            j--;
            continue;
        }
        
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        
        ++i;
        --j;
    }
    
    return s;
}
