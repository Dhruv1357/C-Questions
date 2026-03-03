/*
Problem - Arrays_Find the Union and Intersection of Two Sorted Arrays
Platform - HackerRank
Summary - Finding the union and intersection of two sorted arrays
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    
    int arr1[n1];
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    
    scanf("%d", &n2);
    
    int arr2[n2];
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    
    int i = 0, j = 0;
    
    
    int lastPrinted = -1000001;
    
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            if(arr1[i] != lastPrinted)
            {
                printf("%d ", arr1[i]);
                lastPrinted = arr1[i];
            }
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            if(arr2[j] != lastPrinted)
            {
                printf("%d ", arr2[j]);
                lastPrinted = arr2[j];
            }
            j++;
        }
        else
        {
            if(arr1[i] != lastPrinted)
            {
                printf("%d ", arr1[i]);
                lastPrinted = arr1[i];
            }
            i++;
            j++;
        }
    }
    
    while(i < n1)
    {
        if(arr1[i] != lastPrinted)
        {
            printf("%d ", arr1[i]);
            lastPrinted = arr1[i];
        }
        i++;
    }
    
    while(j < n2)
    {
        if(arr2[j] != lastPrinted)
        {
            printf("%d ", arr2[j]);
            lastPrinted = arr2[j];
        }
        j++;
    }
    
    printf("\n");
    
    i = 0;
    j = 0;
    int found = 0;
    lastPrinted = -1000001;
    
    
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
            i++;
        else if(arr2[j] < arr1[i])
            j++;
        else
        {
            if(arr1[i] != lastPrinted)
            {
                printf("%d ", arr1[i]);
                lastPrinted = arr1[i];
                found = 1;
            }
            i++;
            j++;
        }
    }
    
    if(!found)
        printf("Intersection Not Possible");
    
    return 0;
}