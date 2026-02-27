/*
Problem - Arrays_Second Largest Element
Platform - HackerRank
Summary - Finding the second largest element in an array
*/

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) 
{
    
    long long largest,secondlargest,count=0;
    
    if(n<2)
    {
        return -1;
    }
    
    for(long long i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
            count++;
    }
    if(count==n-1)
        return -1;
    
    largest=arr[0];
    secondlargest=0;
    
    for(long long i=0;i<n;i++)
    {
        if(largest<arr[i])
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(largest>arr[i] && secondlargest<=arr[i])
        {
            secondlargest=arr[i];
        }
    }
    return secondlargest;
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}