/*
Problem - Arrays Kth Smallest Element
Platform - HackerRank
Summary - Finding the k-th smallest element of the array
*/

#include <stdio.h>

int kthSmallest(int arr[], int n, int k) {
    
    int smallest;
    
    for(int j=0;j<k-1;j++)
    {
        smallest=arr[0];
        
        for(int i=0;i<n;i++)
        {
            if(smallest>arr[i])
                smallest=arr[i];
        }

        for(int i=0;i<n;i++)
        {
            if(arr[i]==smallest)
                arr[i]=1000000001;
        }
    }
    
    smallest=arr[0];
    
    for(int i=0;i<n;i++)
        {
            if(smallest>arr[i])
                smallest=arr[i];
        }
    return smallest;
    
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}