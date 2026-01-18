/*
Problem - Loops Arithmetic Progression
Platform - HackerRank
Summary - Printing the first n terms of an arithmetic progression
*/

#include <stdio.h>

int main() {
    int n;
    int a;
    int d;
    scanf("%d\n%d %d",&n,&a,&d);
    
    for(int i=0;i<=n-1;i++)
        printf("%d ",a+i*d);

    return 0;
}