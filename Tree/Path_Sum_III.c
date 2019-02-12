//
//  Path_Sum_III.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

typedef struct TreeNode* pNode;
void preOrder(pNode node , int target , int array[1000] , int depth , int* count)
{
    if (!node)
        return;
    int tmp = 0;
    array[depth]    = node->val;
    for (int i = depth ; i >= 0 ; i --)
    {
        tmp     += array[i];
        if (tmp == target)
            (*count) ++;
    }
    preOrder(node->left , target , array , depth + 1 , count);
    preOrder(node->right , target , array , depth + 1 , count);
}
int pathSum(struct TreeNode* root, int sum) {
    int result      = 0;
    int array[1000] = {0};
    preOrder(root , sum , array , 0 , &result);
    return result;
}
