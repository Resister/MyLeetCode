//
//  Minimum_Absolute_Difference_in_BST.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

static int compare(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}

int
findPairs(int *nums, int numsSize, int k)
{
    int pair = 0;
    int i, j;
    
    qsort(nums, numsSize, sizeof(int), compare);
    //快速排序
    i = j = 0;  //因为排序了
    while (i < numsSize && j < numsSize) {
        if (i == j || nums[i] + k > nums[j]) {
            j++;  //升序排序后，向前加，i数加k找前j，
        } else if (nums[i] + k < nums[j]) {
            i++;
        } else {
            pair++; //如果吻合的话，下一个和必然更大，小小互减，大大互减
            i++;
            while (j < numsSize - 1 && nums[j] == nums[j + 1]) {
                j++;  //假如重复再跳一位
            }
            j++;
        }
    }
    
    return pair;
}
