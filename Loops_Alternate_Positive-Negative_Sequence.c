/*
Problem - Loops_Alternate Positive/Negative Sequence
Platform - HackerRank
Summary - Printing the first n numbers with alternate positive and negative
*/

#include <stdio.h>

int main() {
    
    short n;
    scanf("%hd",&n);
    
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                printf("%d",i);
            else
                printf("-%d",i);
            
            if(i<n)
                printf(" ");
        }
    }
  
    return 0;
}