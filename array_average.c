/*
Problem - Arrays Find the Average of All Elements in an Array
Platform - HackerRank
Summary - Finding the average of all the elements of a given array
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    long long a[n];
    double res;
    double sum=0.00;
    
    for(int i=0;i<=n-1;i++)
        scanf("%lld",&a[i]);
    
    for(int i=0;i<=n-1;i++)
        sum+=a[i];
    res=sum/n;
    printf("%lf",res);
  
    return 0;
}
