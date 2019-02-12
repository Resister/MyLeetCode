//
//  Two_Sum_II_Input_array_is_sorted.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    
    int *ret = (int*)malloc(2*sizeof(int));
    
    int i = 0;
    int *p, *q;
    
    p = &numbers[0];
    q = &numbers[numbersSize-1];
    //有序从小到大，两头查找
    while(p != q)
    {
        if((*p + *q) == target)
        {
            // ret =(int *)realloc(ret, sizeof(int));
            //扩展分配内存的话，可能是为了大于两个数相加
            ret[0] = (p-&numbers[0])+1;
            ret[1] = (q-&numbers[0])+1;
            
            //告诉外面返回的数组长度
            *returnSize = 2;
            
            return ret;
        }
        
        else if((*p + *q) > target)
        {
            q = q - 1;
        }
        else if((*p + *q) < target)
        {
            p = p + 1;
        }
    }
    
    *returnSize = 0;
    
    return NULL;
    
}
