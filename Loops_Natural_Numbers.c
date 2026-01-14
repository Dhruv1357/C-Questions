/*
Problem - Loops Natural Numbers
Platform - HackerRank
Summary - Printing first n natural numbers
*/

#include <stdio.h>
int num(unsigned int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}
int main() {
    unsigned int n;
    scanf("%ud",&n);
    num(n);

    return 0;
}