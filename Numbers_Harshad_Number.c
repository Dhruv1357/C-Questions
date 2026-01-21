/*
Problem - Numbers Harshad Number
Platform - HackerRank
Summary - Classifying whether the given number is a Harshad number or not
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int sum=0;
    int n;
    int new;
    int updated;
    scanf("%d",&n);
    int num=n;

    for(int i=1;i;i++)
    {
        new=n/10;
        updated=n%10;
        sum+=updated;
        if(new==0)
            break;
        n=n/10;
    }
    if(num%sum==0)
        printf("%d is a harshad number",num);
    else
        printf("%d is not a harshad number",num);
  
    return 0;
}
