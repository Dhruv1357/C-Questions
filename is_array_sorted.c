/*
Problem - Arrays Check if Array is Sorted
Platform - HackerRank
Summary - Checking if the array is sorted or not
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("Not Sorted");
            return 0;
        }
    }
    
    printf("Sorted");

    return 0;
}
