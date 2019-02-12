//
//  Search_in_a_Binary_Search_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    
    if(root==NULL){
        return NULL;
    }
    
    if(root->val == val){
        return root;
    }
    
    if(root->val>val){
        return searchBST(root->left, val);
    }
    else{
        return searchBST(root->right, val);
    }
    
}
