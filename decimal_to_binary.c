/*
Problem - Numbers Decimal to Binary [Without using Arrays]
Platform - HackerRank
Summary - Converting decimal numbers to binary
*/

#include <stdio.h>

int main() {
    
    short n;
    scanf("%hd",&n);
    int binary;
    int temp=1,add=0;
    
    printf("Binary equivalent of %d: ",n);
    for(int i=1;i;i++)
    {
        binary=n%2;
        add+=(binary*temp);
        n=n/2;
        temp*=10;
    
        if(n==0)
            break;
    }
    printf("%d",add);
  
    return 0;
}