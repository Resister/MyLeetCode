//
//  Contains_Duplicate.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
void quick_sort_recursive(int arr[], int start, int end) {
    if (start >= end)
        return;
    int mid = arr[end];
    int left = start, right = end - 1;
    while (left < right) {
        while (arr[left] < mid && left < right)
            left++;
        while (arr[right] >= mid && left < right)
            right--;
        swap(&arr[left], &arr[right]);
    }
    if (arr[left] >= arr[end])
        swap(&arr[left], &arr[end]);
    else
        left++;
    if (left)
        quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}

bool containsDuplicate(int* nums, int numsSize) {
    
    quick_sort_recursive(nums,0,numsSize - 1);
    
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            return true;
        }
    }
    return false;
}
