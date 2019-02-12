//
//  License_Key_Formatting.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

char* licenseKeyFormatting(char* S, int K) {
    
    int len=strlen(S);
    char *ret=(char*)malloc(sizeof(char)*len*2);//初始化两倍长，每个字符都带-
    int count=len*2-1;
    int temp_k=0;
    ret[count--]='\0';
    for(int i=len-1;i>=0;i--){
        if(temp_k==K){
            ret[count--]='-'; //第k个是-
            temp_k=0;
        }
        if('a'<=S[i]&&S[i]<='z'){
            ret[count--]=S[i]-'a'+'A'; //小写转大写加入
        }else if(S[i]=='-'){
            continue ;  // -忽略
        }else{
            ret[count--]=S[i]; // 大写字符都加入
        }
        temp_k++;
    }
    if(ret[count+1]=='-'){ //去除头部的-
        return &ret[count+2];
    }
    return &ret[count+1];
    
}
