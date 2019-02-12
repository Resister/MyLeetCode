//
//  Two_Sum_IV_Input_is_a_BST.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool findNode(struct TreeNode* root , int k , struct TreeNode* ex)
{
    if (!root)
        return false;
    if ((root->val == k) && (root != ex))
        return true;
    if (root->val < k)
        return findNode(root->right , k , ex);
    return findNode(root->left , k , ex);
}

bool DFS(struct TreeNode* node , int k , struct TreeNode* root)
{
    if (!node)
        return false;
    if (DFS(node->left , k , root))
        return true;
    int cha = k - node->val;
    if (findNode(root , cha , node))
        return true;
    return DFS(node->right , k , root);
}

bool findTarget(struct TreeNode* root, int k) {
    if (!root)
        return false;
    return DFS(root , k , root);
}
