//
//  Symmetric_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool cmp(struct TreeNode* left, struct TreeNode* right)
{
    
    if(left == NULL && right == NULL)
    {
        return true;
    }
    
    if((left != NULL && right == NULL) || (left == NULL && right != NULL))
    {
        return false;
    }
    
    
    if(left->val == right->val)
    {
        return cmp(left->left, right->right) && cmp(right->left, left->right);;
    }
    else
    {
        return false;
    }
    
}


bool isSymmetric(struct TreeNode* root) {
    
    if(root == NULL)
    {
        return true;
    }
    
    return cmp(root->left, root->right);
    
}
