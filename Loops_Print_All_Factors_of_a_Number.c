/*
Problem - Loops Print All Factors of a Number
Platform - HackerRank
Summary - Printing all the factors of a given number n
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                printf("%d",i);
                
                if(i<n)
                    printf(" ");
            }
        }
    }
   
    return 0;
}
