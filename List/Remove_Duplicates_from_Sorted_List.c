//
//  Remove_Duplicates_from_Sorted_List.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL)
        return head;                        // returns NULL
    
    struct ListNode *current = head;        // save head in current
    struct ListNode *c_next = head->next;   // c_next points to current's next
    
    while(current->next != NULL)
    {
        if(current->val == c_next->val)
        {
            current->next = c_next->next;
            //释放链表节点
            free(c_next);
            c_next = current->next;
        }
        else
        {
            current = c_next;
            c_next = current->next;
        }
    }
    
    return head;
}
