//
//  Happy_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isHappy(int n) {
    
    //why 6
    while(n>6){
        int next = 0;
        while(n){
            next+=(n%10)*(n%10);
            n/=10;
        }
        n = next;
    }
    return n==1;
}
