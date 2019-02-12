//
//  Shortest_Unsorted_Continuous_Subarray.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int findUnsortedSubarray(int* nums, int numsSize) {
    
    int count=0;
    
    int theMin=numsSize-1;
    int theMax=0;
    
    int *copynums = (int*)malloc(sizeof(int)*numsSize);
    
    // for(int i = 0;i<numsSize;i++){
    //     copynums[i] = nums[i];
    // }
    memcpy(copynums, nums, sizeof(int) * numsSize);
    
    qsort(nums,numsSize,sizeof(int),cmp);
    
    for(int i = 0;i<numsSize;i++){
        if(copynums[i] != nums[i]){
            if(i<theMin)
            {
                theMin = i;
            }
            if(i>theMax)
            {
                theMax = i;
            }
            count++;
        }
    }
    
    if(count==0)
    {
        return 0;
    }
    else{
        return theMax-theMin+1;
    }
    
}
