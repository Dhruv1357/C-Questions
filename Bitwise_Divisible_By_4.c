/*
Problem - Bitwise Divisible By 4
Platform - HackerRank
Summary - Checkng if the given number is divisible by 4 or not using bitwise operations
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld",&n);
    
    if(n>= -2147483648 && n<=2147483647)
        if(n&3)
        {
            printf("Not Divisible");
        }
        else
        {
            printf("Divisible");
        }
    else
    {
        printf("Out of Range");
    }
      
    return 0;
}
