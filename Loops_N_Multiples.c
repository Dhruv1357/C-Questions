/*
Problem - Loops N Multiples
Platform - HackerRank
Summary - Printing the first n multiples of x
*/

#include <stdio.h>

int main() {
    int n;
    int x;
    scanf("%d %d",&n,&x);
    
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i*x);
    }
  
    return 0;
}