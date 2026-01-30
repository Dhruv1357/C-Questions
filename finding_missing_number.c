/*
Problem - Arrays Find Missing Number in an Array
Platform - HackerRank
Summary - Finding the missing number in an array
*/

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int a[n-1],count;
    
    if(n>1)
    {
        for(int i=0;i<n-1;i++)
        {
                scanf("%d",&a[i]);  
            
            if(a[i]<1)
                return 0;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                count=0;
                if(i==a[j])
                    count++;
                if(count==1)
                    break;
            }
            if(count==0)
            {
                printf("%d",i);
                break;
            }
        }
    }
     
    return 0;
}