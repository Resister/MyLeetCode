//
//  Merge_Two_Binary_Trees.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

//合并相加二叉🌲
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    if(!t1)
    {
        return t2;
    }
    if(!t2)
    {
        return t1;
    }
    t1->val+=t2->val;  //每个节点是一个值，两个指向左右子节点的指针
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    
    return t1;
}
