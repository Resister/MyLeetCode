//
//  Valid_Palindrome_II.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool validPalindrome(char* s) {
    
    //     int s_len = strlen(s);
    //     int start = 0;
    //     int end = s_len-1;
    
    //     int diff = 1;
    
    //     while(end>start){
    //         if(s[start]!=s[end])
    //         {
    //             diff++;
    //         }
    //         start++;
    //         end--;
    //     }
    
    //     if(diff>1){
    //         return false;
    //     }
    //     else{
    //         return true;
    //     }
    
    int s_len = strlen(s);
    int i = 0, j = s_len - 1;
    bool lbFirst = false;
    
    while (i < j) {
        if (s[i] == s[j]) {
            ++i;
            --j;
        }
        else if (lbFirst)
            return false;
        else {
            if (j == i + 1)
                return true; //最后只有中间相邻两个不同，
            else {
                lbFirst = true;
                //只有两种可能，拔除（跳过）还能成立
                if ( s[i+1] == s[j] && s[i+2] == s[j-1]) {
                    //拔除i这边，i+1要和j位相同，
                    //而且i+2要和j-1相同（保证联系性相同）
                    i += 2;
                    --j;
                } else if ( s[i] == s[j-1] && s[i+1] == s[j-2]) {
                    //j这边同理
                    ++i;
                    j -= 2;
                } else {
                    return false;
                }
            }
        }
    }
    
    return true;
    
    
}
