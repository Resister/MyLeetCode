//
//  Best_Time_to_Buy_and_Sell_Stock.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int maxProfit(int* prices, int pricesSize) {
    
    int i = 0;
    int j = 0;
    
    int profit = 0;
    int MaxProfit = 0;
    
    for(i = 0 ;i<pricesSize; i++)
    {
        for(j = i + 1; j<pricesSize; j++)
        {
            profit = prices[j] - prices[i];
            
            if(profit > MaxProfit)
            {
                MaxProfit = profit;
            }
        }
    }
    //I DO it
    return MaxProfit;
}
