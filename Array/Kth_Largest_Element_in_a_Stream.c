//
//  Kth_Largest_Element_in_a_Stream.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

typedef struct {
    int *pq;
    int k;
    int size;
} KthLargest;

void swap(int *q, int i, int j) {
    int t = q[j];
    q[j] = q[i];
    q[i] = t;
}

void heapSwim(int *q, int h) {
    while (h/2 > 0 && q[h] < q[h/2]) {
        swap(q, h, h/2);
        h = h/2;
    }
}

void heapSink(int *q, int s, int h) {
    while ((h*2 <= s && q[h] > q[h*2]) ||
           (h*2+1 <= s && q[h] > q[h*2+1])) {
        int next = (h*2+1 <= s && q[h*2+1] < q[h*2]) ? h*2+1 : h*2;
        swap(q, h, next);
        h = next;
    }
}

int kthLargestAdd(KthLargest* obj, int v) {
    int *q = obj->pq;
    int k = obj->k;
    int s = obj->size;
    if (s < k) {    // not full, put end
        q[s+1] = v;
        heapSwim(q, s+1);
        obj->size++;
    } else if (v > q[1]) {  // full and larger than root, replace it
        q[1] = v;
        heapSink(q, s, 1);
    }   // full and smaller than root, ignore
    return q[1];
}

KthLargest* kthLargestCreate(int k, int* nums, int numsSize) {
    KthLargest *obj = malloc(sizeof(KthLargest));
    obj->pq = malloc((k+1)*sizeof(int));
    obj->k = k;
    obj->size = 0;
    for (int i = 0; i < numsSize; i++)
        kthLargestAdd(obj, nums[i]);
    return obj;
}

void kthLargestFree(KthLargest* obj) {
    free(obj->pq);
    free(obj);
}
//不明白～～～
/**
 * Your KthLargest struct will be instantiated and called as such:
 * struct KthLargest* obj = kthLargestCreate(k, nums, numsSize);
 * int param_1 = kthLargestAdd(obj, val);
 * kthLargestFree(obj);
 */
