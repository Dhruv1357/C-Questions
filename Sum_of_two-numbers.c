/*
Problem - Adding two numbers
Platform - HackerRank
Summary - Taking two numbers and giving the result as their sum.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    short a;
    short b;
    scanf("%hd %hd",&a,&b);
    short sum= a+b;
    printf("The sum of %hd and %hd is %hd.",a,b,sum);
    return 0;
}