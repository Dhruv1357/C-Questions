/*
Problem - Loops Collatz Sequence
Platform - HackerRank
Summary - Genrating the Collatz sequence for a given positive integer n
*/

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    

    if(n==1)
        printf("%d",n);
    
    
    if(n>1)
    {
       printf("%d -> ",n);
        
       for(int i=1;i;i++)
       {
           if(n==1)
           {
               break;
           }
               
           if(n%2==0)
           {
               n=n/2;
               
               if(n!=1)
                    printf("%d -> ",n);
               else
                   printf("%d",n);
           }
           else
           {
               n=3*n+1;
               
               if(n!=1)
                    printf("%d -> ",n);
               else
                   printf("%d",n);
           }
       }
    }
  
    return 0;
}