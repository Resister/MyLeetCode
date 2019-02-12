//
//  Linked_List_Cycle.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool hasCycle(struct ListNode *head) {
    
    if(!head || !head->next)
        return false;
    
    struct ListNode *walker = head;
    struct ListNode *runner = head;
    //Cycle???
    while(runner->next!=NULL && runner->next->next!=NULL) {
        walker = walker->next;
        runner = runner->next->next;
        if(walker==runner)
            return true;
    }
    
    return false;
}

// Use two pointers, walker and runner.
// walker moves step by step. runner moves two steps at time.
// if the Linked List has a cycle walker and runner will meet at some
// point.
