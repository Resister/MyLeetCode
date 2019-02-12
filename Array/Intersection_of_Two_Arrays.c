//
//  Intersection_of_Two_Arrays.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

//快速交换
int quick_swap(int *num, int left, int right)
{
    //基准数
    int key = num[left];
    
    while (left < right) {
        while (left < right && key <= num[right])
            right--;
        num[left] = num[right];
        while (left < right && key >= num[left])
            left++;
        num[right] = num[left];
    }
    
    num[left] = key;
    //返回中间坑位
    return left;
}
//快速排序
void quick_sort(int *num, int left, int right)
{
    if (left > right) return;
    //交换到中值
    int mid = quick_swap(num, left, right);
    //完美递归
    quick_sort(num, left, mid - 1);
    quick_sort(num, mid + 1, right);
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    quick_sort(nums1, 0, nums1Size - 1);
    quick_sort(nums2, 0, nums2Size - 1);
    
    int sz;
    
    if (nums1Size < nums2Size)
        sz = nums1Size;
    else
        sz = nums2Size;
    
    int *new = (int *)calloc(sz, sizeof(int));
    int i = 0, j = 0;
    //先排序，然后相互前进找相同的数；
    *returnSize = 0;
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] == nums2[j]) {
            if (*returnSize == 0) {//第一次相同
                //加入到交集
                new[(*returnSize)++] = nums1[i];
            }
            else if (*returnSize > 0 && new[(*returnSize)-1] != nums1[i])//保证唯一
            {
                new[(*returnSize)++] = nums1[i];
            }
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j])
            j++;
        else
            i++;
    }
    
    return new;
}


