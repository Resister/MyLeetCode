//
//  Merge_Two_Sorted_Lists.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL)
    {
        return l2;
    }
    
    if(l2 == NULL)
    {
        return l1;
    }
    
    struct ListNode l0;
    struct ListNode* l;
    
    l=&l0;
    
    while (l1 && l2) {
        //把小的放在前面，然后指向下一个节点
        if(l1->val < l2->val ) {
            l->next = l1;
            l1 = l1->next;
        } else {
            l->next = l2;
            l2=l2->next;
        }
        l=l->next;
    }
    //如果空，直接接另外的
    if(l1==NULL) {
        l->next=l2;
    } else {
        l->next = l1;
    }
    return l0.next;
    
}
