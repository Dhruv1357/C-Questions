/*
Problem - Arrays Find Max and Min
Platform - HackerRank
Summary - Finding the max and min element in an array
*/

#include <stdio.h>

int main() {

    int n;
    int max=0;
    int min=0;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    if(max!=a[0])
        max=a[0];
    if(min!=a[0])
        min=a[0];
    
    for(int i=0;i<=n-1;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    
    printf("%d %d",max,min);
        
    return 0;
}