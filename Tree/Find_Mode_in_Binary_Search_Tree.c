//
//  Find_Mode_in_Binary_Search_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

//找出最常见元素，
//BST树的性质，1⃣️右子大于等于父节点，2⃣️左子小于等于父节点
void helper(struct TreeNode* root, int **ret,int *returnSize,int *maxCount, int *count, int *preVal){
    if(root==NULL)
        return;
    helper(root->left,ret,returnSize,maxCount,count,preVal);
    if(*preVal==INT_MIN)
        *preVal=root->val;
    if(root->val==*preVal){
        *count+=1;
    }
    else{
        if(*count>*maxCount){
            (*ret)[0]=*preVal;
            *returnSize=1;
            *maxCount=*count;
        }
        else if(*count==*maxCount){
            *ret=(int*)realloc(*ret,(*returnSize+1)*sizeof(int));
            (*ret)[*returnSize]=*preVal;
            *returnSize+=1;
        }
        *count=1;
        *preVal=root->val;
    }
    helper(root->right,ret,returnSize,maxCount,count,preVal);
}

int* findMode(struct TreeNode* root, int* returnSize) {
    if(root==NULL) return NULL;
    int *ret=(int *)calloc(1,sizeof(int));
    int maxCount=0,count=0,preVal=INT_MIN;
    helper(root,&ret,returnSize,&maxCount,&count,&preVal);
    if(maxCount==count){
        ret=(int*)realloc(ret,(*returnSize+1)*sizeof(int));
        ret[*returnSize]=preVal;
        *returnSize+=1;
    }
    else if(maxCount<count){
        ret[0]=preVal;
        *returnSize=1;
    }
    return ret;
}
