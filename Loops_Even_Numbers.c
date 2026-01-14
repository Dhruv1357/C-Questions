/*
Problem - Loops Even Natural Numbers
Platform - HackerRank
Summary - Printing even natural numbers from 1 to n
*/

#include <stdio.h>
    int even(unsigned int n)
    {
        for(int i=2;i<=n;i+=2)
        {
            printf("%d ",i);
        }
        return 0;
    }
int main() {
    unsigned int n;
    scanf("%ud",&n);
    even(n);

    return 0;
}