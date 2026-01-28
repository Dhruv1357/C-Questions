/*
Problem - Arrays Find the Index of the Last Occurrence of a Given Element
Platform - HackerRank
Summary - Finding the index when an element is occuring for the last time
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int a[n],count=-1,num;
    
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&num);

        for(int i=0;i<n;i++)
        {
            if(a[i]==num)
                count=i;
        }
        if(count!=-1)
            printf("%d",count);
        if(count==-1)
            printf("-1");
    }
      
    return 0;
}
