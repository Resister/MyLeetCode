//
//  Climbing_Stairs.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int climbStairs(int n) {
    
    int dp[3] = { 1, 1, 0};
    if (n < 2)
    {
        return 1;
    }
    for (int i = 2; i <= n; i++)
    {
        //第n阶的组合数等于（n-1）阶的组合数+ （n-2）阶的组合数
        dp[2] = dp[0] + dp[1];
        dp[0] = dp[1];
        dp[1] = dp[2];
    }
    return dp[2];
}
