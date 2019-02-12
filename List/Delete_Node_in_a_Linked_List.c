//
//  Delete_Node_in_a_Linked_List.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

void deleteNode(struct ListNode* node) {
    //直接跳过就好了
    *node = *node->next;
}
