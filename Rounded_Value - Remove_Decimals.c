/*
Problem - Rounded Value - Remove Decimals
Platform - HackerRank
Summary - Taking the input as a floating point number and printing it without decimal
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n;
    scanf("%f",&n);
    int div=n/1;
    printf("Rounded Value = %d",div);
  
    return 0;
}
