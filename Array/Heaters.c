//
//  Heaters.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

#define MAX(a,b)  ((a>b)?(a):(b))
#define MIN(a,b)  ((a<b)?(a):(b))

int cmp( const void *a, const void *b )
{
    return *((int*)a)-*((int*)b) ;
}
//二分查找
int binarySearch( int* nums, int l, int r, int tar )
{
    int m ;
    while( l <= r )
    {
        m = l + (r-l)/2 ;
        if( tar == nums[m] ) return m ;
        if( tar > nums[m] ) l = m+1 ;
        else r = m-1 ; // tar < nums[m]
    }
    return r ;
}

int findRadius(int* houses, int housesSize, int* heaters, int heatersSize) {
    //房子排序
    qsort( heaters, heatersSize, sizeof(int), cmp ) ;
    
    int idx, max = INT_MIN, min ;
    for( int i=0 ; i < housesSize ; i++ )
    {
        //找出每个房子最近的加热器
        idx = binarySearch( heaters, 0, heatersSize-1, houses[i] ) ;
        
        if( idx == -1 )
            min = heaters[0]-houses[i] ;//头部
        else if( idx == heatersSize-1 )
            min = houses[i]-heaters[idx] ; //尾部
        else
            min = MIN( houses[i]-heaters[idx], heaters[idx+1]-houses[i] ) ; //房子两边都有加热器，选最近的
        
        max = MAX( max, min ) ; //每个房子最近加热器的最大值
    }
    return max ;
}
