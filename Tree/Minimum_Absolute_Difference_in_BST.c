//
//  Minimum_Absolute_Difference_in_BST.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int minfour(int a, int b, int c, int d) {
    int min = INT_MAX;
    if(min > a && a > 0){
        min = a;
    }
    if(min > b && b > 0) {
        min = b;
    }
    if(min > c && c > 0) {
        min = c;
    }
    if(min > d && d > 0) {
        min = d;
    }
    return min;
}

int helper(struct TreeNode *root, int *min, int *max) {
    
    if(!root) {
        *min = INT_MAX;
        *max = INT_MIN;
        return INT_MAX;
    }
    
    if (!(root->left) && !(root->right)) {
        *min = root->val;
        *max = root->val;
        return INT_MAX;
    }
    
    int min_l, max_l;
    int min_r, max_r;
    
    int l_res = helper(root->left, &min_l, &max_l);
    int r_res = helper(root->right, &min_r, &max_r);
    //所有里面的最大最小值，所有的最短距离
    *min = (min_l < root->val ? min_l : root->val);
    *max = (max_r > root->val ? max_r : root->val);
    
    //Note : abs(max_l - root->val) or abs(min_r - root->val) will over flow if there was no left or right child
    //So check that the result is > than 0 in minfour function
    return minfour(abs(max_l - root->val), abs(min_r - root->val), l_res, r_res);
    
}

int getMinimumDifference(struct TreeNode* root) {
    
    int min = INT_MAX;
    int max = INT_MIN;
    return helper(root, &min, &max);
}
