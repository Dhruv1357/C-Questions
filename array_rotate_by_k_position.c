/*
Problem - Arrays_Rotate Array by K Positions
Platform - HackerRank
Summary -  Rotatong the array by k positions
*/

#include <stdio.h>

void rotateArray(int arr[], int n, int k) 
{
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        if(i+k<n)
        {
            a[i]=arr[i+k];
        }
        else
            a[i]=arr[(i+k)%n];
    }
    
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    

}



int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    rotateArray(arr, n, k);
    
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}