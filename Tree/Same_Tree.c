//
//  Same_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    
    if(p == NULL && q == NULL)
    {
        return true;
    }
    
    if(p != NULL && q != NULL)
    {
        if(p->val != q->val)
            return false;
    }
    else
        return false;
    
    //左和左，右和右，
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    
    
    //     if(p->left->val == q->left->val)
    //         if(p->right->val == q->right->val)
    //             return true;
    
    //     return false;
}
