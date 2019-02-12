//
//  Convert_BST_to_Greater_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

//BST特性--left.key<parent.key<=right.key
//加上所有比当前节点大的节点值
void helper(struct TreeNode* root, int *curr_sum) {
    if(!root) {
        return;
    }
    
    //go right first as everything on right is greater than root
    helper(root->right, curr_sum);
    root->val = root->val + *curr_sum;
    *curr_sum = root->val;
    //now go left, everything on left is lesser than root
    helper(root->left, curr_sum);
}


struct TreeNode* convertBST(struct TreeNode* root) {
    int curr_sum = 0;
    helper(root, &curr_sum);
    return root;
}

