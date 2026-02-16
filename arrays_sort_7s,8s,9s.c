/*
Problem - Arrays Sort an Array of 7s, 8s, and 9s
Platform - HackerRank
Summary - Sorting all the 7s first then all the 8s and then all the 9s in a given array
*/

#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) 
{
    
    int count7=0,count8=0,count9=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==7)
        {
            count7++;
        }
        if(arr[i]==8)
        {
            count8++;
        }
        if(arr[i]==9)
        {
            count9++;
        }
    }
    
    for(int i=0;i<count7;i++)
    {
        arr[i]=7;
    }
    for(int i=count7;i<count7+count8;i++)
    {
        arr[i]=8;
    }
    for(int i=count7+count8;i<n;i++)
    {
        arr[i]=9;
    }
}


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}