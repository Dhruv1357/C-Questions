/*
Problem - Loops Divisible by 3 and 5
Platform - HackerRank
Summary - Printing numbers between 1 and 100 that are divisible by both 3 and 5
*/

#include <stdio.h>
int main() {
    for(int i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d\n",i);
        }
    }
  
    return 0;
}