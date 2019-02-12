//
//  To_Lower_Case.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//


char* toLowerCase(char* str) {
    
    int str_len = strlen(str);
    
    for(int i=0;i<str_len;i++){
        
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;   //放假也要练，不然迟钝了
        }
        
    }
    
    return str;
    
}
