//
//  Balanced_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isBalanced(struct TreeNode* root) {
    
    if(root == NULL)
    {
        return true;
    }
    
    int diff = Depth(root->left) - Depth(root->right);
    
    if(diff > 1 || diff < -1)
    {
        return false;
    }
    
    return isBalanced(root->left) && isBalanced(root->right);
    
}

int Depth(struct TreeNode* root)
{
    
    if(root == NULL)
    {
        return 0;
    }
    
    int left = Depth(root->left);
    int right = Depth(root->right);
    
    return left>right?left+1:right+1;
}

