/*
Problem - Loops Subtract Product and Sum of two numbers
Platform - HackerRank
Summary - Finding the product and Sum of two numbers and then finding their difference
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,sum=0,product=1,difference;
    scanf("%d",&n);
    
    for(int i=1;i;i++)
    {
        sum+=n%10;
        product*=n%10;
        n=n/10;
        if(n==0)
            break;
    }
    
    difference=product-sum;
    
    printf("%d",difference);
       
    return 0;
}
