//
//  Minimum_Absolute_Difference_in_BST.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

void inorder(struct TreeNode *root, int *last, int *min) {
    if (!root) return;
        
    inorder(root->left, last, min);    
    
    // examine
    if (root->val != *last && abs(root->val - *last) < *min)
        *min = abs(root->val - *last);
    *last = root->val;
    
    inorder(root->right, last, min);    
}

int getMinimumDifference(struct TreeNode* root) {
    int min = INT_MAX;
    int last = root->val;
    inorder(root, &last, &min);
    return min;
}
