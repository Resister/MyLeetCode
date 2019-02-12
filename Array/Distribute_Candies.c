//
//  Distribute_Candies.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

//妹妹平分糖果的最大不同数量

int distributeCandies(int* candies, int candiesSize) {
    
    int *count;
    count = (int*)malloc(200001*sizeof(int));
    int kinds=0;  //int一定要初始给值
    for(int i = 0;i<candiesSize;i++){
        if(count[candies[i]+100000]==0)
        {
            kinds++; //每次的第一个种类加一
        }
        count[candies[i]+100000]++;
    }
    if(kinds<=candiesSize*0.5)
    {
        return kinds;
    }
    return candiesSize*0.5;
    
    //     int count=0;
    //     int *array;
    
    //     array=(int*)malloc(sizeof(int)*200001);
    //     for(int i=0;i<candiesSize;i++)
    //     {
    //         if(array[candies[i]+100000]==0)
    //         {
    //             count++;
    //         }
    //         array[candies[i]+100000]++;
    //     }
    //     if(count<=(candiesSize/2))
    //     {
    //         return count;
    //     }
    //     return (candiesSize/2);
    
    
}
