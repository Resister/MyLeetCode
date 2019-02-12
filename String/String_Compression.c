//
//  String_Compression.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int compress(char* chars, int charsSize) {
    char digit[300]={0};
    int i,j,k,p=0,c=0;
    for(i=0;i<charsSize;i++){
        c++;
        if(i==charsSize-1||chars[i+1]!=chars[i]){
            chars[p]=chars[i];
            if(c>1){//大于一个相同的，
                j=-1;
                while(c!=0)
                {//十位拆成单独的个位
                    digit[++j]=c%10;
                    c/=10;
                }
                for(k=j;k>=0;k--)
                    chars[++p]=digit[k]+'0';
            }
            ++p;
            c=0;
        }
    }
    return p;
}
