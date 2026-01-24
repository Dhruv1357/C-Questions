/*
Problem - Loops Sum of Multiples
Platform - HackerRank
Summary - The sum of all numbers in the given range divisible by 3, 5, or 7
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0;
    short n;
    scanf("%hd",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0 ||i%7==0)
            sum+=i;
    }
    printf("%d",sum);
 
    return 0;
}
