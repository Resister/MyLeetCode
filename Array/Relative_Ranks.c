//
//  Relative_Ranks.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

int cmp( const void *a, const void *b )
{
    return *(*((int**)b))-*(*((int**)a)) ;
}
//单词不是单一字符，所以要二维
char** findRelativeRanks(int* nums, int numsSize, int* returnSize) {
    
    if( numsSize == 0 ) return NULL ;
    char** res = malloc( sizeof(char*) * numsSize ) ;
    for( int i=0 ; i < numsSize ; i++ )
        res[i] = calloc( 13, sizeof(char) ) ; //奖牌英文的长度
    
    int** sort = malloc( sizeof(int*) * numsSize ) ;
    for( int i=0 ; i < numsSize ; i++ )
    {
        sort[i] = calloc( 2, sizeof(int) ) ;
        sort[i][0] = nums[i] ;
        sort[i][1] = i ;  //不明白
    }
    
    qsort( sort, numsSize, sizeof(sort[0]), cmp ) ;
    
    if( numsSize > 0 ) strcpy( res[sort[0][1]], "Gold Medal" ) ; //第一替换
    if( numsSize > 1 ) strcpy( res[sort[1][1]], "Silver Medal" ) ; //第二替换
    if( numsSize > 2 ) strcpy( res[sort[2][1]], "Bronze Medal" ) ; //第三替换
    
    for( int i=3 ; i < numsSize ; i++ )
        sprintf( res[sort[i][1]], "%d", i+1 ) ; // 剩下的输入排序数字
    
    *returnSize = numsSize ;
    return res ;
}
