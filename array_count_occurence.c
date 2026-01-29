/*
Problem - Arrays Count Occurrences of an Element
Platform - HackerRank
Summary - Counting how many times an element has occured in an array
*/

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int a[n],count=0,num;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    
    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
            count++;
        }
    }
    
    printf("%d",count);
 
    return 0;
}