/*
Problem - Loops Divisible by 3 or 5 but not by both Series
Platform - HackerRank
Summary - Printing numbers from 1 to n that are divisible by either 3 or 5 but not both
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    unsigned short factor(unsigned short n)
    {
        for(unsigned short i=1;i<=n;i++)
        {
            if(((i%3==0) || (i%5==0)) && !(i%3==0 && i%5==0))
            {
                printf("%hu",i);
                
                if(i!=n)
                    printf(" ");
            }
        }
        return 0;
    }
int main() {
    unsigned short n;
    scanf("%hu",&n);
    factor(n);
 
    return 0;
}
