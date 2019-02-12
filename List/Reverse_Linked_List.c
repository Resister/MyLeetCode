//
//  Reverse_Linked_List.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

struct ListNode* reverseList(struct ListNode* head) {
    
    //反转链表
    struct ListNode *prev=NULL, *cur=head, *next=head;
    while (cur)
    {
        next = next->next;
        //前一个会等于当前的下一个，相当于反转
        cur->next = prev;
        //继续前进
        prev = cur;
        cur = next;
    }
    
    return prev;
}
