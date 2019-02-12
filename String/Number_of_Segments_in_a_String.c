//
//  Number_of_Segments_in_a_String.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int countSegments(char* s) {
    
    int result=0;
    while(*s!='\0'){
        if(*s!=' '&&(*(s+1)==' '||*(s+1)=='\0'))
        {
            result++;
        }
        s++;
    }
    return result;
}
