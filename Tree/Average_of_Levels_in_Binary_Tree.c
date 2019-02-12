//
//  Average_of_Levels_in_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int getAverage(struct TreeNode* root, long** sum, int** number, int length, int level) {
    if (root == NULL) return length;
    int size = length;
    if (level > size - 1){
        *sum = realloc(*sum, (size + 1) * sizeof(long));
        *number = realloc(*number, (size + 1) * sizeof(int));
        (*sum)[size] = 0;
        (*number)[size] = 0;
        size ++;
    }//统计每一层数量
    (*sum)[level] += root -> val;
    (*number)[level] += 1;
    size = getAverage(root -> left, sum, number, size, level + 1);
    size = getAverage(root -> right, sum, number, size, level + 1);
    return size;  //同阶数量
}
//不懂～～～

double* averageOfLevels(struct TreeNode* root, int* returnSize) {
    
    long* sum = calloc(0 , sizeof(long));
    int* number = calloc(0 , sizeof(int));
    int size = getAverage(root, &sum, &number, 0, 0);
    *returnSize = size;
    double* result = calloc(size , sizeof(double));
    for (int i = 0; i < size; i ++){
        if (number[i] != 0)
            result[i] = (double)sum[i] / number[i];
    }
    return result;
    
}
