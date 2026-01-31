/*
Problem - Arrays Count the Number of Elements Greater Than the Average Value
Platform - HackerRank
Summary - Counnting how many numbers are greater than the average value of the array
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n],count=0;
    double avg;
    long long sum=0;
    
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }

        avg=(double)sum/n;

        for(int i=0;i<n;i++)
        {
         if(arr[i]>avg)
             count++;
        }

        printf("%d",count);
    }
    
    else if(n==0)
        printf("0");
       
    return 0;
}
