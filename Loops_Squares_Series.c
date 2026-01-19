/*
Problem - Loops Squares Series
Platform - HackerRank
Summary - Generating the series 1,4,9,16,... of n numbers but skipping the numbers divisible by 3
*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int count=0;
    
    if(n>0)
        for(int i=1;i;i++)
        {
            if((i*i)%3!=0)
            {
                printf("%d ",i*i);
                count++;
            }
            if(count==n)
                break;
        }

    return 0;
}