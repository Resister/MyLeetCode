//
//  Lowest_Common_Ancestor_of_a_Binary_Search_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    
    if(p->val==root->val)
        return p;
    else if(q->val==root->val)
        return q;
    
    //left<root<right???
    else if(p->val>root->val&&q->val>root->val)
        return lowestCommonAncestor(root->right,p,q);
    else if(p->val<root->val&&q->val<root->val)
        return lowestCommonAncestor(root->left,p,q);
    else return root;
}
