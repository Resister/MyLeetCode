//
//  Min_Stack.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//
//最小栈
typedef struct {
    int *pStack;
    int *pMin;
    int top;
    int maxSize;
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
    MinStack *pMinStack;
    int *pStack;
    int *pMin;
    
    if (maxSize <= 0)
        return NULL;
    
    pMinStack = (MinStack *) malloc(sizeof(MinStack));
    if (!pMinStack)
        return NULL;
    pStack = (int *) malloc(sizeof(int)*maxSize);
    if (!pStack) {
        free(pMinStack);
        return NULL;
    }
    pMin = (int *) malloc(sizeof(int)*maxSize);
    if (!pMin) {
        free(pMinStack);
        free(pStack);
        return NULL;
    }
    
    pMinStack->pStack = pStack;
    pMinStack->pMin = pMin;
    pMinStack->top = -1;
    pMinStack->maxSize = maxSize;
    
    return pMinStack;
}

void minStackPush(MinStack* obj, int x) {
    int min;
    
    if (!obj || obj->top == obj->maxSize)
        return;
    
    if (obj->top == -1) {
        obj->top = 0;
        min = x;
    } else {
        min = obj->pMin[obj->top];
        if (x < min) {
            min = x;
        }
        obj->top++;
    }
    obj->pStack[obj->top] = x;
    obj->pMin[obj->top] = min;
    
    return;
}

void minStackPop(MinStack* obj) {
    if (!obj || obj->top == -1)
        return;
    
    obj->top--;
}

int minStackTop(MinStack* obj) {
    if (!obj || obj->top == -1)
        return INT_MIN;
    
    return obj->pStack[obj->top];
}
//MinStack厘米有排序，top pop之后就顺位第二小；
int minStackGetMin(MinStack* obj) {
    if (!obj || obj->top == -1)
        return INT_MIN;
    
    return obj->pMin[obj->top];
}

void minStackFree(MinStack* obj) {
    if (!obj)
        return;
    
    free(obj->pStack);
    free(obj->pMin);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * struct MinStack* obj = minStackCreate(maxSize);
 * minStackPush(obj, x);
 * minStackPop(obj);
 * int param_3 = minStackTop(obj);
 * int param_4 = minStackGetMin(obj);
 * minStackFree(obj);
 */
