/*
Problem - Loops Odd Numbers
Platform - HackerRank
Summary - Printing odd numbers upto n
*/

#include <stdio.h>
    int odd(unsigned int n)
    {
        for(int i=1;i<=n;i+=2)
        {
            printf("%d ",i);
        }
        return 0;
    }
int main() {
    
        unsigned int n;
        scanf("%ud",&n);
        odd(n);
   
    return 0;
}