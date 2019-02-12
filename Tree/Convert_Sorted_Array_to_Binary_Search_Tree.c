//
//  Convert_Sorted_Array_to_Binary_Search_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    
    if(numsSize == 0)
    {
        return NULL;
    }
    
    int mid = numsSize / 2;
    struct TreeNode* res = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    
    res->val = nums[mid];
    res->left = sortedArrayToBST(nums, mid);
    res->right = sortedArrayToBST(nums + mid + 1, numsSize - mid - 1);
    
    return res;
}
