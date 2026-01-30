/*
Problem - Arrays Count Elements Greater Than a Given Value K
Platform - HackerRank
Summary - Counting how many elements are greater than k
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int a[n],k,count=0;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&k);

    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
            count++;
    }
    
    printf("%d",count);
   
    return 0;
}
