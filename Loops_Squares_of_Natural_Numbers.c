/*
Problem - Loops Squares of Natural Numbers
Platform - HackerRank
Summary - Printing the squares of numbers from 1 to n
*/

#include <stdio.h>

int main() {
    
    short n;
    scanf("%hd",&n);
    
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d",i*i);
            if(i<n)
                printf(" ");
        }
    }
  
    return 0;
}