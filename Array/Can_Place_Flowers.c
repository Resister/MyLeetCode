//
//  Can_Place_Flowers.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    
    // int count=0;
    // if(flowerbed[0]!=1&&flowerbed[1]!=1){count++;flowerbed[0]=1;}
    // for(int i=2;i<flowerbedSize-1;i++){
    //     if(flowerbed[i]!=1&&flowerbed[i-1]!=1&&flowerbed[i+1]!=1)
    //       {
    //         count++;
    //        flowerbed[i]=1;
    //       }
    // }
    // if(flowerbed[flowerbedSize-2]!=1&&flowerbed[flowerbedSize-1]!=1){count++;}
    // return count>=n?true:false;
    
    
    int count=0,i=0;
    while(i<flowerbedSize){
        //这就是我想的连续三个为零或者两头连续两个零
        if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==flowerbedSize-1||flowerbed[i+1]==0))
        {
            count++;
            flowerbed[i]=1; //这点我没想到，找到要种下去，因为要影响后续。
        }
        if(count>=n)  //提前判定，小于就肯定够了
            return true;
        i++;  //不够再往后找
    }
    return false;  //否则没有，
}
