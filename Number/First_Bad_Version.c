//
//  First_Bad_Version.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    while(isBadVersion(n) == true)
        n--;
    return n+1;
    
}
