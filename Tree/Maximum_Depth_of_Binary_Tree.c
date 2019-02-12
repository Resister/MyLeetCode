//
//  Maximum_Depth_of_Binary_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int max_depth;

void depth_pool(struct TreeNode* node, int depth)
{
    if(node != NULL)
    {
        depth++;
        if(depth > max_depth)
        {
            max_depth = depth;
        }
        
    }
    else
    {
        return;
    }
    
    if(node->left != NULL)
    {
        depth_pool(node->left, depth);
    }
    if(node->right != NULL)
    {
        depth_pool(node->right, depth);
    }
    
}

int maxDepth(struct TreeNode* root) {
    
    max_depth = 0;
    
    depth_pool(root, 0);
    
    return max_depth;
}
