//
//  Intersection_of_Two_Linked_Lists.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    if(headA == NULL || headB == NULL)
    {
        return NULL;
    }
    
    struct ListNode *pA = headA, *pB = headB;
    
    while(true)
    {
        if(pA == pB)
        {
            return pA;
        }
        else if(pA->next == NULL && pB->next == NULL)
        {
            return NULL;
        }
        else
        {
            if(pA->next)
            {
                pA = pA->next;
            }
            else
            {
                pA = headB;
            }
            
            if(pB->next)
            {
                pB = pB->next;
            }
            else
            {
                pB = headA;
            }
        }
    }
    
}
