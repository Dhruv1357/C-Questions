/*
Problem - Arrays Find the Sum of All Elements in an Array
Platform - HackerRank
Summary - Finding the sum of all elements of an array
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N;
    scanf("%d",&N);
    int a[N];
    int sum=0;
    
    if(N>0)
    {
        for(int i=0;i<=N-1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<=N-1;i++)
        {
            sum+=a[i];
        }
        printf("%d",sum);
    }
        
    return 0;
}
