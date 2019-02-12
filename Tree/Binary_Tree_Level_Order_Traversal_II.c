//
//  Binary_Tree_Level_Order_Traversal_II.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int DepthTree(struct TreeNode *root){
    if(root == NULL )
        return 0;
    int leftDepth = 1 +  DepthTree(root->left);
    int rightDepth = 1 +  DepthTree(root->right);
    
    return (leftDepth > rightDepth ? leftDepth : rightDepth);
}
void levelOrder(struct TreeNode* root, int ** orderArr, int* colNums, int depth){
    
    if(root == NULL)
        return;
    levelOrder(root->left, orderArr, colNums, depth - 1);
    colNums[depth] += 1;
    orderArr[depth] = realloc(orderArr[depth], sizeof(int)*(colNums[depth]));
    orderArr[depth][colNums[depth] - 1] =  root->val;
    
    
    levelOrder(root->right, orderArr, colNums, depth - 1);
}

int** levelOrderBottom(struct TreeNode* root, int** columnSizes, int* returnSize) {
    int treeDepth;
    int ** orderArr;
    
    int i = 0;
    
    if(root == NULL)
        return NULL;
    
    treeDepth = DepthTree(root);
    *returnSize = treeDepth;
    //Here must use calloc not malloc, if use malloc can show"runtime err", shit！ why?
    orderArr = (int **)calloc(treeDepth, sizeof(int *));
    *columnSizes =  (int *)calloc(treeDepth, sizeof(int));
    
    //Use calloc will set buffer to be zero automatically.
    memset(* columnSizes, 0 , sizeof(int) * treeDepth);
    
    levelOrder(root, orderArr, *columnSizes, treeDepth - 1);
    
    return orderArr;
    
}
