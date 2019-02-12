//
//  Rotate_Array.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

void swap(int *nums,int i,int j)
{
    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
}


void rotate(int* nums, int numsSize, int k) {
    
    //     if(NULL == nums || 0 == numsSize)
    //     {
    //         return;
    //     }
    //     //when k > numsSize
    //     //超过的话，还是超过的第几个
    //     k = k%numsSize;
    //     if(1 == numsSize || 0 ==k)
    //     {
    //         return;
    //     }
    
    //     int *tempNum = (int*)malloc(sizeof(int)*numsSize);
    //     if(NULL == tempNum)
    //     {
    //         return;
    //     }
    //     memset(tempNum,0,sizeof(int)*numsSize);
    //     memcpy(tempNum,nums,sizeof(int)*numsSize);
    //     int loop = 0;
    
    //     for(loop=0;loop < numsSize;loop++)
    //     {
    //         //例如k=3，取模正好从头开始，
    //         nums[loop] = tempNum[(numsSize-k+loop)%(numsSize)];
    //     }
    //     free(tempNum);
    
    //     return;
    
    
    int i = 0, j = numsSize - 1;
    
    if (numsSize == 0)
        return;
    
    k = k % numsSize;
    
    while (i < j) {
        swap(nums, i, j);
        i++;
        j--;
    }
    //[7,6,5,4,3,2,1]
    
    i = 0;
    j = k - 1;
    
    while (i < j) {
        swap(nums, i, j);
        i++;
        j--;
    }
    //[5,6,7,4,3,2,1]
    
    i = k;
    j = numsSize - 1;
    while (i < j) {
        swap(nums, i, j);
        i++;
        j--;
    }
    //[5,6,7,1,2,3,4]
}
