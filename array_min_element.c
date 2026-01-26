/*
Problem - Arrays Find the Minimum Element in an Array
Platform - HackerRank
Summary - Finding the smallest element in a given array
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int res=0;
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
        if(res!=a[0])
            res=a[0];
            
    for(int i=0;i<=n-1;i++)
    {
        if(res>a[i])
            res=a[i];
    }
    printf("%d",res);
  
    return 0;
}
