/*
Problem - Arrays Left Rotate an Array by One Position
Platform - HackerRank
Summary - Rotating the array towards the left by one postion
*/

#include <stdio.h>

void leftRotateByOne(int arr[], int n) 
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        if(i!=(n-1))
        a[i]=arr[i+1];
            
        else
            a[n-1]=arr[0];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    
    // Your code here
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}