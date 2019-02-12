//
//  Nim_Game.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool canWinNim(int n) {
    
    //假如4是必输的话，然后4的倍数都能达到最后4的局面；
    //反之其他的倍数，都能达成4后的后手取胜；
    if(n % 4 == 0)
    {
        return false;
    }
    
    return true;
}
