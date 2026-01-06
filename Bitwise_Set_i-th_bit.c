/*
Problem - Bitwise Set i-th bit
Platform - HackerRank
Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/bitwise-set-i-th-bit
Summary - Setting the i-th bit of a number 'n' where both 'n' and 'i' are provided by the user
*/

#include <stdio.h>

int main() {
    long long N;
    short i;
    scanf("%lld %hd",&N,&i);
    
    long long N_new=N|(1<<i);
    printf("%lld",N_new);

    return 0;
}