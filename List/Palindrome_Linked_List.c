//
//  Palindrome_Linked_List.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

void MidNode(struct ListNode *head, struct ListNode **mid)
{
    //找链表的中间节点
    
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    *mid = slow;
}

void ReverseList(struct ListNode *old, struct ListNode **new)
{
    //反转链表
    
    struct ListNode *prev=NULL, *cur=old, *next=old;
    while (cur)
    {
        next = next->next;
        //前一个会等于当前的下一个，相当于反转
        cur->next = prev;
        //继续前进
        prev = cur;
        cur = next;
    }
    *new = prev;
}

bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return true;
    
    struct ListNode *mid, *head2;
    MidNode(head, &mid);
    ReverseList(mid, &head2);
    
    while (head && head2)
    {
        if (head->val != head2->val)
            return false;
        head = head->next;
        head2 = head2->next;
    }
    return true;
}
