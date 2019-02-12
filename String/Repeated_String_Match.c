//
//  Repeated_String_Match.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int repeatedStringMatch(char* A, char* B) {
    
    int i;
    int LenA = strlen(A);
    int LenB = strlen(B);
    char *Pos;
    
    char* TmpStr = malloc(3 * 10000*sizeof(char));
    *TmpStr = '\0';//首地址开始？
    
    int MaxRepeat = LenB / LenA + 2;
    for(i = 1; i <= MaxRepeat; i++){
        TmpStr = strcat(TmpStr, A); //拼接，A拼接到TmpStr后面
    }
    
    Pos = strstr(TmpStr, B); //判断是否为子串，是则返回子串首地址，否则NULL
    if(Pos == NULL)
        return -1;
    return  MaxRepeat - (TmpStr + MaxRepeat * LenA - Pos - LenB) / LenA;
    
}
