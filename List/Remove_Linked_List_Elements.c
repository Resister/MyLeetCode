//
//  Remove_Linked_List_Elements.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

struct ListNode* removeElements(struct ListNode* head, int val) {
    
    //     if (head == NULL)
    //         return NULL;
    
    //     head->next = removeElements(head->next, val);
    
    //     return head->val == val ? head->next : head;
    
    struct ListNode *p = head;
    struct ListNode *prev = NULL, *tmp =  NULL;
    
    while (p) {
        if (p-> val == val) {
            tmp = p;
            if (!prev) {
                head = p->next;
                p = head;
            } else {
                prev->next = p->next;
                p = prev->next;
            }
            free(tmp);
        } else {
            prev = p;
            p = p->next;
        }
    }
    
    return (head);
}
