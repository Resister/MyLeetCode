//
//  Second_Minimum_Node_In_a_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

//Min放在[0]
//second minimum value
void helper(struct TreeNode* root, int *saver) {
    if (root == NULL)
        return;
    if(saver[0]==-1)
        saver[0]=root->val;
    else if(saver[1]==-1 && root->val!=saver[0])
        saver[1]=root->val;
    else if (root->val < saver[0]) {
        saver[1] = saver[0];
        saver[0] = root->val;
    }
    else if (root->val > saver[0] && root->val < saver[1]) {
        saver[1] = root->val;
    }
    helper(root->left, saver);
    helper(root->right, saver);
}
int findSecondMinimumValue(struct TreeNode* root) {
    int saver[2] = {-1,-1};
    helper(root, saver);
    return saver[1];
}
