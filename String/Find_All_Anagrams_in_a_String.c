//
//  Find_All_Anagrams_in_a_String.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

void create_hashtable(char* p,int *hash,int len_p){
    for(int i=0; i<len_p; i++){
        hash[p[i]%26]++;
    }
}

int* findAnagrams(char* s, char* p, int* returnSize) {
    
    int len_p=strlen(p), len_s=strlen(s);
    int* hash=calloc(26,sizeof(int)); //可容納26字母的hashtable
    int* ret=malloc(len_s*sizeof(int));
    int start=0,end=0; //moving window的左右點
    int count=0;
    *returnSize=0;
    //不懂～点解要整除26
    if(len_s<len_p) return NULL;
    
    create_hashtable(p,hash,len_p); //建立hashtable
    
    while(end<len_s){
        
        if(end-start==len_p){ //moving window太大了
            hash[s[start]%26]++; //退還最左邊的字母
            if(hash[s[start]%26]>0){  //判斷是否退還的是字謎的字母，如果是配對數-1
                count--;
            }
            start++;
        }
        
        //判斷新的右端點能否配對
        if(hash[s[end]%26]>0){
            count++;
        }
        
        //若moving window內全配對成功
        if(count==len_p){
            (*returnSize)++;
            // ret=realloc(ret,sizeof(int)*(*returnSize));
            ret[(*returnSize)-1]=start;
        }
        hash[s[end]%26]--;
        end++;
    }
    return ret;
    
}
