/*
Problem - Arrays Check Whether the Array Is Sorted
Platform - HackerRank
Summary - Checking if the array is sorted or not and if yes then is it ascending or descending
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int arr[n],countasc=0,countdes=0;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            countdes++;
        }
        else if(arr[i-1]<arr[i])
        {
            countasc++;
        }
        else if(arr[i-1]==arr[i])
        {
            countasc++;
            countdes++;
        }
    }
    
    if(countasc==n-1)
        printf("Ascending");
    else if(countdes==n-1)
        printf("Descending");
    else
        printf("Not Sorted");
         
    return 0;
}
