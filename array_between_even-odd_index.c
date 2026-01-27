/*
Problem - Arrays Difference Between Even-Index and Odd-Index Element Sums
Plartform - HackerRank
Summary - Finding the difference between even and odd index element's sum
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    long long a[n];
    long long sumEven=0,sumOdd=0,difference;
    
    if(n>0)
    {
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sumEven+=a[i];
            }
            else
            {
                sumOdd+=a[i];
            }
        }

        difference=sumEven-sumOdd;
        printf("%lld",difference);
    }
  
    return 0;
}
