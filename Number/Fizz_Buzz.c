//
//  Fizz_Buzz.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

char** fizzBuzz(int n, int* returnSize) {
    
    *returnSize = n;
    char buf[11];
    char** re_p = (char**)malloc(sizeof(char*)*n);
    int i = 0;
    for(i=0;i<n;i++)
    {
        if(((i+1)%3==0)&&((i+1)%5==0))
        {
            //格式字符传到指定字符串
            sprintf(buf,"%s","FizzBuzz");
        }else if((i+1)%3==0){
            sprintf(buf,"%s","Fizz");
        }else if((i+1)%5==0){
            sprintf(buf,"%s","Buzz");
        }else{
            sprintf(buf,"%d",i+1);
        }
        re_p[i]=malloc(sizeof(buf));
        memcpy(re_p[i],buf,strlen(buf)+1);
        memset(buf,"",11);
    }
    
    return re_p;
    
}
