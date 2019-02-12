//
//  Excel_Sheet_Column_Title.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

char* convertToTitle(int n) {
    
    int size=0;
    //可以拆成多少个26
    for(int i=n-1;i>=0;){
        ++size;
        i=i/26-1;
    }
    //26进制
    char *str=(char*)malloc(sizeof(char)*(size));
    
    for(int i=n-1,j=size-1;j>=0;j--){
        str[j]=i%26+'A';    //取模相当于得到从A的偏移量，第一次取是个位，相当于乘的逆
        i=i/26-1;
    }
    
    
    // str[size]='\0';
    
    return str;
}
