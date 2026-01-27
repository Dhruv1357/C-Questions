/*
Problem - Arrays Count Even-Odd Numbers in an Array
Platform - HackerRank
Summary - Counting number of even and odd numbers in an array
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    long long a[n];
    long long counteven=0;
    long long countodd=0;
    
    if(n>0)
    {
        for(int i=0;i<=n-1;i++)
        {
            scanf("%lld",&a[i]);
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                counteven++;
            else
                countodd++;
        }
    }
    printf("%lld %lld",counteven,countodd);
   
    return 0;
}