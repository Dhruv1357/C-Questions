/*
Problem - Loops Count Digits That Divide a Number
Platform - HackerRank
Summary - Counting how many digits of a given number divide the given number
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    int num=n;
    int new;
    
    
    for(int i=1;i;i++)
    {
        new=n%10;
        if(new!=0 && num%new==0)
            count++;
        n=n/10;
        if(n==0)
        break;
    }
    printf("%d",count);
  
    return 0;
}
