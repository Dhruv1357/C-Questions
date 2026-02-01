/*
Problem - Arrays Find the Second Smallest Element in an Array
Platform - HackerRank
Summary - Finding the second smallest element in the array
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n], res=0, secondSmallest=0;
    int count=0;
    
    if(n<2)
    {
        printf("-1");
        return 0;
    }
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=1;i<n;i++)
    {
        if(a[i] == a[i-1])
        {
            count++;
        }
    }
    if(count==(n-1))
    {
        printf("-1");
        return 0;
    }
    
    

    res = secondSmallest = a[0];
    
    for(int i=0;i<n;i++)
    {
        if(res>a[i])
        {
            secondSmallest = res;
            res=a[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(res<a[i])
        {
         secondSmallest=a[i];
            break;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if((res<a[i]) && (secondSmallest>a[i]))
            secondSmallest=a[i];
    }
    
    printf("%d",secondSmallest);   
    return 0;
}
