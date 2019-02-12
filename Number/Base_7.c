//
//  Base_7.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

//转换成7进制的字符串
char* convertToBase7(int num) {
    
    static char buf[0x11];
    char *p = buf + 0x10; //从最后开始
    
    if (num >= 0)
    {
        *--p = '0' + (num % 7);  //拿余数后进一位，（满7进一）
        while (0 != (num /= 7)) //除7还有，继续进
            *--p = '0' + (num % 7);
    }
    else
    {
        *--p = '0' - (num % 7);  //负数越小
        while (0 != (num /= 7))
            *--p = '0' - (num % 7);
        *--p = '-';
    }
    return (p);
}
