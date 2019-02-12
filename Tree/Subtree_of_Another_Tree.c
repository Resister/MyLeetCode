//
//  Subtree_of_Another_Tree.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool isSame(struct TreeNode* s, struct TreeNode* t);

bool isSubtree(struct TreeNode* s, struct TreeNode* t) {
    if( s== NULL && t ==NULL)
        return true;
    if( s == NULL || t == NULL)
        return false;
    if((s->val == t->val) &&(isSame(s->right, t->right)) && (isSame(s->left,t->left))){
        return true;
    }
    else if(isSubtree(s->right,t) || isSubtree(s->left,t)){
        return true;
    }
    else{
        return false;
    }
}
//相同的子树
bool isSame(struct TreeNode* s, struct TreeNode* t){
    bool lef,rig;
    if(s == NULL && t == NULL){
        return true;
    }
    if(s == NULL && t != NULL){
        return false;
    }
    if(s != NULL && t == NULL){
        return false;
    }
    if((s->val == t->val) && isSame(s->right,t->right) && isSame(s->left,t->left)){
        return true;
    }
    else{
        return false;
    }
    
}



