/*
Problem - Loops Reverse Odd Numbers
Platform - HackerRank
Summary - Printing n odd numbers in the reverse orders
*/

#include <stdio.h>

int main() {
    short n;
    scanf("%hd",&n);
    short count=0;
    short a[n];
    
    if(n>0)
    {
        for(short i=1;i;i++)
            if(i%2!=0)
            {
                for(int j=0;j<1;j++)
                {
                    a[count]=i;
                    count++;
                }
                if(count==n)
                    break;
            }
        for(int i=(n-1);i>=0;i--)
        {
            if(i!=0)
                printf("%hd ",a[i]);
            if(i==0)
                printf("%d.",a[0]);
        }
    }
      
    return 0;
}