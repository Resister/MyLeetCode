//
//  Diameter_of_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int result;
int preorder(struct TreeNode* root)
{
    if(root==NULL)
    {return 0;}
    int temp_left=0,temp_right=0;
    temp_left=preorder(root->left);
    temp_right=preorder(root->right);
    if(result<temp_left+temp_right)
    {
        result=temp_left+temp_right;
    }
    return (temp_left>temp_right?temp_left:temp_right)+1;
    //其实就是找出右边最深和左边最深，相加，真写不出好的递归
}
int diameterOfBinaryTree(struct TreeNode* root) {
    if((root==NULL)||(root->left==NULL&&root->right==NULL))
    {
        return 0;
    }
    result=0;
    preorder(root);
    return result;
}
