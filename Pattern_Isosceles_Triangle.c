/*
Problem - Pattern Isosceles Triangle
Platform - HackerRank
Summary - Printing an isosceles triangle pattern based on the number of rows given by the user
*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    if(n>1)
    {
        for(int i=1;i<=n;i++)
        {
            for(int k=1;k<=n-i;k++)
            {
                printf(" ");
            }
            for(int j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
        printf("Shape Not Possible");

    return 0;
}