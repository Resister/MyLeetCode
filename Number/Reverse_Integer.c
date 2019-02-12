//
//  Reverse_Integer.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int reverse(int x) {
    bool negative = false;
    if(x<0){
        negative = true;
        x = -x;
    }
    int nums = 0;
    int tmpNum;
    int tmp;
    int i;
    while(x){
        if(nums>(INT_MAX-x%10)/10)//成立，则一定会超
            return 0;
        nums=nums*10+x%10;
        x = x/10;
    }
    if(negative)
        return -nums;
    return nums;
}
