//
//  Minimum_Index_Sum_of_Two_Lists.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

char** findRestaurant(char** list1, int list1Size, char** list2, int list2Size, int* returnSize) {
    
    *returnSize=0;
    char **ans = NULL;
    int index=1000*30;
    for(int i=0; i<list1Size; ++i){
        for(int j=0; i+j<=index && j<list2Size; ++j){
            if(strcmp(list1[i],list2[j]) == 0){  //一个个对比字符，如果相同
                if(i+j <= index){
                    if(i+j != index)
                        *returnSize=0;
                    //再申请最短的相同字符串的长度，单词一个个字符匹配，吻合就扩充加一
                    ans = (char**)realloc(ans, sizeof(char*)* (++(*returnSize)));
                    //写入吻合的下一个相同字符串的内容
                    ans[(*returnSize)-1] = list1[i]; //因为先加了所以减一个
                    //记下当前字符串长度
                    index=i+j;
                }
            }
        }
    }
    return ans;
    
}
