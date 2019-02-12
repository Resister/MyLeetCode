//
//  Count_Primes.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

int countPrimes(int n) {
    
    if(n < 3) return 0;
    
    bool *isPrime = malloc(sizeof(bool) * n);
    memset(isPrime, true, n);
    
    int primeCount = 1 ; // 2 is the only even number that is a prime
    
    for(int i = 3; i < n; i = i+2) { // only odd numbers can be primes 只有奇数才有可能是质数
        
        if(isPrime[i]) { //is a prime number
            primeCount++;
            //sieve all multiples 筛选所有倍数
            //非素数的奇数，是由相同素数相加而成，清除3+3，3+3+3，下一个true就是素数，接着清除这个素数的范围内累加
            for(int j = i; j < n; j = j+i) {
                isPrime[j] = false;
            }
        }
    }
    
    return primeCount;
    
}
