//
//  Isomorphic_Strings.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isIsomorphic(char* s, char* t) {
    
    //     static int ab[256], ba[256];
    //     int a, b;
    
    //     (void)memset(ab, 0, sizeof(ab));
    //     (void)memset(ba, 0, sizeof(ba));
    //     do {
    //         a = *(unsigned char *)s++;
    //         b = *(unsigned char *)t++;
    //         if (ab[a] == 0)
    //             ab[a] = b;
    //         if (ba[b] == 0)
    //             ba[b] = a;
    //     } while (a != 0 && b != 0 && ab[a] == b && ba[b] == a);
    
    //     return a == 0 && b == 0;
    
    
    int m1[256] = {0}, m2[256] = {0}, n = strlen(s);
    for (int i = 0; i < n; ++i) {
        //重复出现的字母的位置相同，其他都好说
        if (m1[s[i]] != m2[t[i]])
            return false;
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
    
}
