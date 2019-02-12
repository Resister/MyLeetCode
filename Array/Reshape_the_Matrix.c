//
//  Reshape_the_Matrix.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int** matrixReshape(int** nums, int numsRowSize, int numsColSize, int r, int c, int** columnSizes, int* returnSize) {
    if (r * c != numsRowSize * numsColSize) {
        r = numsRowSize;
        c = numsColSize;
        
    }
    
    *returnSize = r; //新二维数组的row
    int** result = (int**) malloc(r * sizeof(int*));
    *columnSizes = (int*) malloc(r * sizeof(int));
    for (int i = 0; i < r; ++i) {
        result[i] = (int*) malloc(c * sizeof(int));
        (*columnSizes)[i] = c; //新二维数组的col
    }
    
    for (int i = 0; i < numsRowSize * numsColSize; ++i)
        result[i/c][i%c] = nums[i/numsColSize][i%numsColSize];
    //整除表示那一行，取余表示不满一行的第几个
    
    return result;
}
