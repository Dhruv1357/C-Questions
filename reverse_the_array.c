/*
Problem - Arrays Reverse the Array
Platform - HackerRank
Summary - Reversing the array
*/

#include <stdio.h>

void reverseArray(int arr[], int n) {
    
    if(n>0)
        for(int i=0;i<1;i++)
        {
            int a[n];

            for(int j=0;j<n;j++)
            {
                a[j]=arr[n-j-1];
            }
            for(int j=0;j<n;j++)
            {
                arr[j]=a[j];
            }
        }
    
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}