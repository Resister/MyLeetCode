//
//  Pascal's_Triangle_II.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int* getRow(int rowIndex, int* returnSize) {
    
    int i=0;
    int j=0;
    
    int ** returnArray = (int **)malloc(sizeof(int *) * (rowIndex+1));
    
    for(i=0; i<rowIndex+1; i++)
    {
        
        returnArray[i] = (int *)malloc(sizeof(int) * (i+1));
        
        for(j=0; j<i+1; j++)
        {
            if( (0 == j)  || (i == j) )
                returnArray[i][j] = 1;
            else
                returnArray[i][j] = returnArray[i-1][j-1] + returnArray[i-1][j];
        }
        
    }
    
    *returnSize = rowIndex + 1; //为什么？？？？
    
    return returnArray[rowIndex];
    
}
