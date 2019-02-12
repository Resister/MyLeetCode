//
//  Island_Perimeter.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    
    int count=0, repeat=0;
    for(int i=0;i<gridRowSize;i++)
    {
        for(int j=0; j<gridColSize;j++)
        {
            if(grid[i][j]==1)
            {
                count ++;  //统计1方格数
                if(i!=0 && grid[i-1][j] == 1) //横向方格连接
                    repeat++;
                if(j!=0 && grid[i][j-1] == 1) //纵向方格连接
                    repeat++;
            }
        }
    }
    return 4*count-repeat*2;
    
}
