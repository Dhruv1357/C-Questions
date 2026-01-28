/*
Problem - Arrays Find the Index of an Element
Platform - HackerRank
Summary - Finding the index of a given element in an array
*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n],target;
    
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&target);
    
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==target)
            {
                printf("%d",i);
                return 0;
            }
        }
        printf("-1");
    }
  
    return 0;
}