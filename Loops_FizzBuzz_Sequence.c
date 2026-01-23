/*
Problem - Loops FizzBuzz Sequence
Platform - HackerRank
Summary - Printing Fizz/Buzz or FizzBuzz based on some conditions
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n-1;i++)
    {
        if(i%3==0)
            if(i%5==0)
                printf("FizzBuzz\n");
            else
                printf("Fizz\n");
        else if(i%5==0)
            printf("Buzz\n");
        else
            printf("%d\n",i);
    }
    
    if(n%3==0)
        if(n%5==0)
            printf("FizzBuzz");
        else
            printf("Fizz");
    else if(n%5==0)
        printf("Buzz");
    else
        printf("%d",n);
          
    return 0;
}
