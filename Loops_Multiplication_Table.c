/*
Problem - Loops Multiplication Table
Platform - HackerRank
Summary - Printing the multiplication table of a number n from 1 to 10
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,n*i);

    return 0;
}