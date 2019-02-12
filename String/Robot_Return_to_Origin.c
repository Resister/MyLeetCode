//
//  Robot_Return_to_Origin.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool judgeCircle(char* moves) {
    
    int count1=0;
    int count2=0;
    
    int s_len = strlen(moves);
    for(int i=0;i<s_len;i++){
        if(moves[i]=='U')
        {
            count1+=1;
        }
        else if(moves[i]=='D'){
            count1-=1;
        }
        else if(moves[i]=='L'){
            count2+=1;
        }
        else if(moves[i]=='R'){
            count2-=1;
        }
    }
    
    if(count1==0&&count2==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}
