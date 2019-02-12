//
//  Repeated_Substring_Pattern.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool repeatedSubstringPattern(char* s) {
    //      //[1] get size of s
    //     int size_S=0;
    //     while(s[++size_S]!=0){}
    
    //     //[2] primefactor search
    //     int quotient=size_S;
    
    int size_S = strlen(s);
    int quotient=size_S;
    
    for(int prime_i=2; prime_i<=quotient; prime_i++)
    {
        if(quotient%prime_i==0) //可以拆成多少份相同（整除），不同拆法
        {
            // check: if prime_i fits
            int size_sub= size_S/prime_i;
            int i=0;
            for(size_sub-=1; ++size_sub<size_S; ++i)
            {
                if(s[size_sub]!=s[i])  //不吻合就不累加，累加到最后都没有break就是true
                    break;
            }
            if(size_sub==size_S)
                return true;
            
            // Make sure NO prime_i in quotient
            while(quotient%prime_i==0) //大拆分之下的小拆分？？
                quotient/=prime_i;
        }
    }
    return false;
}

/*
 Complexity:
 Space ~ O(1).
 Time ~  O(k*n).
 - k = number of size_S.prime_factors
 - k <= 6 In this problem. (2*3*5*7*11*13>10000)
 
 
 [1]:-Without using strlen() may shorten Runtime, wierd.
 
 [2]:-String S can be devided into k parts == S can be devided into PrimeFactor_of(k) parts.
 -example: |abcd|abcd|abcd||abcd|abcd|abcd|  prime(6)=2
 
 -We Only need to check all PrimeFactor of (S.size()).
 */
