//
//  Sum_of_Square_Numbers.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

// a2 + b2 = c.
bool judgeSquareSum(int c) {
    
    //     bool t1=0;
    //     int temp=c;
    //     int num=sqrt(c);
    //     if(c==0)
    //         t1=1;
    //     else
    //     {
    //         for(int i=1;i<num+1;i++)
    //         {
    //             // 如果使用float 精度不夠  99999999將出現錯誤
    //             double flo_num,test;
    //             int int_num,sub;
    //             sub=c-i*i;
    //             if(sub<0)
    //             {
    //                 t1=0;
    //                 break;
    //             }
    
    //             if(sub==0)
    //             {
    //                t1=1;
    //                 break;
    //             }
    //             flo_num=sqrt(sub);
    //             int_num=sqrt(sub);
    //             if(flo_num==int_num)
    //             {
    //                 t1=1;
    //                 break;
    //             }
    //         }
    //     }
    //     return t1;
    
    for(long a = 0; a*a<=c; a++){
        double b = sqrt(c-a*a);
        if(b == (int)b)  //是整数
            return true;
    }
    
    return false;
    
}
