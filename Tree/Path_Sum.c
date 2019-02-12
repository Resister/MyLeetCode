//
//  Path_Sum.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool hasPathSum(struct TreeNode* root, int sum) {
    
    if (root == NULL)
    {
        return false;
    }
    
    //减到最后一个相等
    if (root->left == NULL && root->right == NULL && root->val == sum )
    {
        return true;
    }
    
    //能true就true
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    
}
