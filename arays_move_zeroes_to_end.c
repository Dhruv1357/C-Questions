/*
Problem - Move Zeroes to the end of the array
Platform - HackerRank
Summary - Moving all the zeroes present in the array to the end of the array
*/

#include <stdio.h>

void moveZerosToEnd(int arr[], int n) 
{
    int count=0;
    for(int i=0;i<n-count;i)
    {
        if(arr[i]==0)
        {
            count++;
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[n-1]=0;
        }
        if(arr[i]!=0)
            i++;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}