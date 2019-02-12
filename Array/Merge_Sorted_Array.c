//
//  Merge_Sorted_Array.c
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
//递归快速排序
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
        //中位的基元左右移动
        quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}

void merge(int* nums1, int m, int* nums2, int n) {
    
    int i = 0;
    
    for(i = 0;i < n;i++)
    {
        nums1[m + i] = nums2[i]; //合成一个数组
    }
    
    quick_sort_recursive(nums1, 0, m+n - 1);
}
