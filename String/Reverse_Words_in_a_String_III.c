//
//  Reverse_Words_in_a_String_III.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//
// reverses each word
void *rev(char *first,char *last, int count){
    char *temp = first;
    last--; //前后两个指针交换，相遇
    for(int i=0;i<(count/2);i++){
        char temp = *(first);
        *(first) = *(last);
        *(last) = temp;
        first++;
        last--;
    }
    return;
}


char* reverseWords(char* s) {
    
    char *final_temp = s;
    
    char *temp = s;
    int count = 0;
    while(*s){
        if(*s == ' '){
            rev(temp,s,count);
            s= s+1;
            temp =s;
            count = 0;
        }
        s++;
        count++;
        
    }
    rev(temp,s,count); //最后一个词
    return final_temp;
    
}
