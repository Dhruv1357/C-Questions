/*
Problem - Loops The Guardian of Prime Gate
Platform - HackerRank
Summary - Classifying a given number as prime,composite or neither based on some given conditions
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int prime=1;
    
    if(n>1)
    {
        if(n>2)
        {
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime)
                printf("Prime");
            else
                printf("Composite");
        }
        if(n==2)
            printf("Prime");
    }
    else
        printf("None");
 
    return 0;
}
