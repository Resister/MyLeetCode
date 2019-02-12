//
//  Pascal's_Triangle.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int** generate(int numRows, int** columnSizes) {
    
    int i = 0;
    int j = 0;
    
    if(numRows == 0)
    {
        return 0;
    }
    
    int **returnArray = (int **)malloc(sizeof(int *) * numRows);
    
    *columnSizes = (int *)malloc(sizeof(int)*numRows);
    
    for(i = 0; i<numRows; i++)
    {
        (*columnSizes)[i] = i+1;
        
        returnArray[i] = (int *)malloc(sizeof(int) * (i+1));
        
        for(j = 0; j<i+1; j++)
        {
            if((j == 0) || (i == j))
            {
                returnArray[i][j] = 1;
            }
            
            else
            {
                returnArray[i][j] = returnArray[i-1][j-1] + returnArray[i-1][j];
            }
        }
    }
    
    return returnArray;
}
