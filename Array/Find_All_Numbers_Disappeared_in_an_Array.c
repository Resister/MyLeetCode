//
//  Find_All_Numbers_Disappeared_in_an_Array.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    
    // SIGH safety...
    if (numsSize <= 0) {
        return NULL;
    }
    // initialize
    bool found[numsSize];
    for (int i=0; i < numsSize; i++) {
        found[i] = false;
    }
    // populate
    for (int i=0; i < numsSize; i++) {
        found[nums[i]-1] = true;
    }
    // count
    int slots = 0;
    for (int i=0; i < numsSize; i++) {
        if (!found[i]) {
            slots++;
        }
    }
    // malloc
    int *retval = (int*) malloc(slots * sizeof(int));
    if (!retval) {
        return NULL;
    }
    // populate
    int *tip = retval;
    for (int i=0; i < numsSize; i++) {
        if (!found[i]) {
            *tip = i+1;
            tip++;
        }
    }
    // go home
    *returnSize = slots;
    return retval;
    
}
