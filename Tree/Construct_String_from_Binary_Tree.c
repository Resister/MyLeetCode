//
//  Construct_String_from_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

void tree2str2(struct TreeNode* t,char *tree2StrResult,int *index) {
    //这方法太漂亮了，
    
    if(t==NULL) {return;}
    int c=0;
    char tmp[10];
    if(t->val<0)
    {
        tree2StrResult[(*index)++]='-';
    }
    
    else if(t->val==0)
    {
        tmp[c++]='0';
    }
    
    int value=abs(t->val);
    
    while(1)
    {
        short bit=value%10;
        if(value==0) break;
        tmp[c++]=bit+'0';
        value=value/10;
    }
    
    int j;
    for(j=c-1;j>=0;j--)
    {
        tree2StrResult[(*index)++]=tmp[j];
    }
    
    if(t->left!=NULL)
    {
        tree2StrResult[(*index)++]='(';
        tree2str2(t->left,tree2StrResult,index);
        tree2StrResult[(*index)++]=')';
    }
    else if(t->left==NULL&&t->right!=NULL)
    {
        tree2StrResult[(*index)++]='(';
        tree2StrResult[(*index)++]=')';
    }
    
    if(t->right!=NULL)
    {
        tree2StrResult[(*index)++]='(';
        tree2str2(t->right,tree2StrResult,index);
        tree2StrResult[(*index)++]=')';
    }
}

char* tree2str(struct TreeNode* t)
{
    char *tree2StrResult=malloc(sizeof(char)*1024000);
    int i=0;
    tree2str2(t,tree2StrResult,&i);
    return tree2StrResult;
}
