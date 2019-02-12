//
//  Trim_a_Binary_Search_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//
//除去树里面的零
struct TreeNode* trimBST(struct TreeNode* root, int L, int R) {
    
    if (!root)
        return NULL;
    if(root->val<L)
        return trimBST(root->right,L,R);
    if(root->val>R)
        return trimBST(root->left,L,R);
    root->left  = trimBST(root->left,L,R);
    root->right = trimBST(root->right,L,R);;
    return root;
    
}
