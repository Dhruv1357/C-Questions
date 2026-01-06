/*
Problem - Sum Last Digits
Platform - HackerRank
Summary - Finding the sum of the last digits of the given two numbers.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(unsigned int a, unsigned int b){
    short last1=a%10;
    short last2=b%10;
    short res=(last1+last2);
    printf("The sum of last digits is: %hd",res);
    return res;
}
int main() 
{
    unsigned int a;
    unsigned int b;
    scanf("%u %u",&a,&b);
    sumLastDigits(a,b);
  
    return 0;
}