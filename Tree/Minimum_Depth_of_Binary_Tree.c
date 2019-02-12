//
//  Minimum_Depth_of_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int min(int a, int b)
{
    a = a > b? b:a;
    
    return a;
}

int minDepth(struct TreeNode* root) {
    
    if(root == NULL)
    {
        return 0;
    }
    
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    
    if(root->left == NULL)
    {
        return minDepth(root->right) + 1;
    }
    
    else if(root->right == NULL)
    {
        return minDepth(root->left) + 1;
    }
    
    else
    {
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
    
}
