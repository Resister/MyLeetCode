//
//  Set_Mismatch.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int Abs(int a){
    return a>0?a:-a;
}

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    
    //     int target=0;
    
    //     for(int i=0;i<numsSize-1;i++){
    //         if(nums[i]==nums[i+1]){
    //             target=i;
    //         }
    //     }
    
    //     *returnSize = 2;
    
    //     int* TargetArr = (int*)malloc(sizeof(int)*2);
    
    //     if(nums[0]>=nums[1]&&nums[0]!=1)
    //     {
    //         TargetArr[0]=nums[target];
    //         TargetArr[1]=nums[target]-1;
    //     }
    //     else{
    //         TargetArr[0]=nums[target];
    //         TargetArr[1]=nums[target]+1;
    //     }
    
    //     return TargetArr;
    
    int* ans = (int*)malloc(sizeof(int)*2);
    *returnSize = 2;
    for(int i = 0; i < numsSize; i++) {
        int val = nums[i]<0?-nums[i]:nums[i];
        ans[1] ^= (i+1) ^ val;
        if (nums[val-1] < 0) ans[0] = val;
        else nums[val-1] = -nums[val-1];
    }
    ans[1] ^= ans[0];
    return ans;
    
    //找到那个数，然后标志为负？？
    // int* res = (int*)malloc(sizeof(int)*2);
    // *returnSize = 2;
    // for(int i = 0;i< numsSize;i++){
    //     //因为1～n，前面都是正，后面都是负，但是如果重复数的话，会跳会到后面，
    //     //所以是负值
    //     if(nums[Abs(nums[i]) - 1] < 0){
    //         res[0] = Abs(nums[i]);
    //     }
    //     else{
    //         //全部变成负，因为相同，会重复乘一次，
    //         nums[Abs(nums[i]) - 1] *= -1;
    //     }
    // }
    // //只有第二个重复的数是正的，因为没有乘-1
    // for(int i = 0;i< numsSize;i++){
    //     if(nums[i] > 0){  //因为两个重复的数有可能不是相连的
    //         res[1] = i + 1;
    //     }
    // }
    // return res;
    
}
