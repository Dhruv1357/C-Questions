/*
Problem - Range Check
Platform - HackerRank
Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/check-if-a-number-is-within-a-given-range/submissions/code/1401413712
Summary - Checking whether the given input is 'In Range' or 'Out of Range' when the range is also provided by the user
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    long long low;
    long long high;
    scanf("%lld %lld %lld",&n,&low,&high);
        
        if(n>=low && n<=high){
            printf("In Range");
        }
    else{
        printf("Out of Range");
    }
      
    return 0;
}
