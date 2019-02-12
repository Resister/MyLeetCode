//
//  Sum_of_Left_Leaves.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int sumOfLeftLeaves(struct TreeNode* root) {
    
    int sum = 0;
    if (root) {
        if (root->left) {
            if (root->left->left || root->left->right) {
                //里面的里面
                sum += sumOfLeftLeaves(root->left);
            } else {
                sum += root->left->val;
            }
        }
        if (root->right && (root->right->left || root->right->right)) {
            sum += sumOfLeftLeaves(root->right);
        }
    }
    return sum;
    
}
