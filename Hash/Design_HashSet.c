//
//  Design_HashSet.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

typedef struct {
    int *arr;
} MyHashSet;

MyHashSet* myHashSetCreate() {
    MyHashSet* obj=malloc(sizeof(MyHashSet));
    obj->arr=malloc(sizeof(int)*100000);
    return obj;
}

void myHashSetAdd(MyHashSet* obj, int key) {
    obj->arr[key]=1;
}

void myHashSetRemove(MyHashSet* obj, int key) {
    obj->arr[key]=0;
}

bool myHashSetContains(MyHashSet* obj, int key) {
    if(obj->arr[key]==1)
        return true;
    return false;
}

void myHashSetFree(MyHashSet* obj) {
    free(obj);
}

/**
 * Your MyHashSet struct will be instantiated and called as such:
 * struct MyHashSet* obj = myHashSetCreate();
 * myHashSetAdd(obj, key);
 * myHashSetRemove(obj, key);
 * bool param_3 = myHashSetContains(obj, key);
 * myHashSetFree(obj);
 */
