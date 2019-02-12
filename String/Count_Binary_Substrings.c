//
//  Count_Binary_Substrings.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int countBinarySubstrings(char* s) {
    
    int cur_len = 1, len = strlen(s), pre_len = 0, ret = 0;
    
    for(int i = 1; i < len; i++){
        if(*(s+i) == *(s+i-1))  //只有0和1
            cur_len ++;
        else{
            //间隔0和1，01，0011，000111，10，1100，111000
            pre_len = cur_len;
            cur_len = 1;
        }
        if(pre_len >= cur_len)
            ret ++;
    }
    return ret;
    
}
