//
//  Binary_Tree_Tilt.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

// int dfs(struct TreeNode* ptr,int* sum){
//     if(ptr==NULL){
//         return 0;
//     }
//     int l,r;
//     l=dfs(ptr->left,sum);
//     r=dfs(ptr->right,sum);
//     *sum+=abs(l-r);
//     return l+r+ptr->val;
// }
// int findTilt(struct TreeNode* root) {
//     int sum=0;
//     dfs(root,&sum);
//     return sum;
// }

int result;
int preorder(struct TreeNode* root)
{
    if(root==NULL) return 0;
    int leftval=0,rightval=0;
    leftval=preorder(root->left); //父节点+左右子节点
    rightval=preorder(root->right);
    result=abs(leftval-rightval)+result;
    return  root->val+leftval+rightval;  //点解要return父节点+左右子节点
}
int findTilt(struct TreeNode* root) {
    result=0;
    preorder(root);
    return result;
}
