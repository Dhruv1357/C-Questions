/*
Problem - Pattern Arrowhead
Platform - HackerRank
Summary - Printing an arrow head based on the given input n
*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    if(n>1)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(j==1 || j==i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        for(int i=1;i<=n-1;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                if(j==1 || j==n-i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("Shape Not Possible");
  
    return 0;
}