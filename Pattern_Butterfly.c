/*
Problem - Pattern_Butterfly
Platform - HackerRank
Summary - Printing a butterfly pattern based on a given input n
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        short n;
        scanf("%hd",&n);
    if(n>1)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=2*n;j++)
            {
                
                    if(j<=i || j>2*n-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
            }
            printf("\n");
        }
        for(int i=1;i<=n-1;i++)
        {
            for(int j=1;j<=2*n;j++)
            {
                if((j<=n-i) || (j>=n+1+i))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Shape Not Possible");
    }

    return 0;
}
