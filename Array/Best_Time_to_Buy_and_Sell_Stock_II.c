//
//  Best_Time_to_Buy_and_Sell_Stock_II.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int maxProfit(int* prices, int pricesSize) {
    
    int i = 0;
    int total = 0;
    
    for(i = 0 ;i<pricesSize-1; i++)
    {
        //短线操作
        if(prices[i+1]>prices[i])
        {
            total += prices[i+1]-prices[i];
        }
        
    }
    
    return total;
}
