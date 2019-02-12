//
//  Palindrome_Number.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isPalindrome(int x) {
    if (x < 0) return false;
    return reverse(x) == x;
}

int reverse(int x) {
    int rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;  //后面取整向前移
        x /= 10;
    }
    return rev;
}
