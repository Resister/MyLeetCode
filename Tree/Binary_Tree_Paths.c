//
//  Binary_Tree_Paths.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

void copy(int *a,char *b,int temp)
{
    int j=0;
    for(int i=0;i<temp;i++)
    {
        j+=sprintf(b+j,"%d->",a[i]);
    }
    b[j-2]='\0';
}
void order(struct TreeNode* root,int* returnSize,char** result,int *a,int *temp)
{
    if(root==NULL)
    {return ;}
    a[(*temp)++]=root->val;
    if(root->left==NULL&&root->right==NULL)
    {
        result[*returnSize]=(char*)malloc(sizeof(char)*100);
        copy(a,result[*returnSize],*temp);
        (*returnSize)++;
        (*temp)--;
        return;
    }
    order(root->left,returnSize,result,a,temp);
    order(root->right,returnSize,result,a,temp);
    (*temp)--;
}
char** binaryTreePaths(struct TreeNode* root, int* returnSize) {
    int *temp=(int*)malloc(sizeof(int));
    *temp=0;
    int *a=(int*)malloc(sizeof(int)*100);
    char** result=(char**)malloc(sizeof(char*)*100);
    *returnSize=0;
    if(root==NULL)
    {return NULL;}
    order(root,returnSize,result,a,temp);
    return result;
}

