// Problem - Adding two numbers
// Platform - HackerRank
// Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/challenge-2-a-sum-of-two-numbers/submissions/code/1400637178
// Summary - Taking two numbers and giving the result as their sum.

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