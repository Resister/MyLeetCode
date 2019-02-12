//
//  Construct_the_Rectangle.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int* constructRectangle(int area, int* returnSize) {
    
    int* ReturnArray=malloc(sizeof(int)*2);
    * returnSize=2;
    int i=sqrt(area);  //用默认函数开方，
    while(i){          //下减找最大整除数，
        if(area%i == 0){
            *ReturnArray=area/i;
            *(ReturnArray+1)=i;
            break;
        }
        i--;
    }
    return ReturnArray;
    
}
