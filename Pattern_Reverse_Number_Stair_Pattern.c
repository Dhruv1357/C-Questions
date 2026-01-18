/*
Problem - Pattern Reverse Number Stair Pattern
Platform - HackerRank
Summary - Printing reverse number stair pattern using numbers from N to 1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i+1;j>0;j--)
            printf("%d ",j);
        
        printf("\n");
    }

    return 0;
}
