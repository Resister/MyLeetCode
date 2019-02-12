//
//  Invert_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//
//i DID
void Excharge(struct TreeNode* root)
{
    int value = 0;
    
    value = root->left;
    
    root->left = root->right;
    
    root->right = value;
    
    if(root->left != 0)
    {
        Excharge(root->left);
    }
    
    if(root->right != 0)
    {
        Excharge(root->right);
    }
}

struct TreeNode* invertTree(struct TreeNode* root) {
    
    //     if(root == 0)
    //     {
    //         return root;
    //     }
    
    //     Excharge(root);
    
    //     return root;
    
    if (root == NULL) {
        return root;
    } else {
        struct TreeNode* left = invertTree(root->right);
        struct TreeNode* right = invertTree(root->left);
        root->left = left;
        root->right = right;
        return root;
    }
}
