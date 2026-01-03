// Problem - Basic Data Types in C
// Platform - HackerRank
// Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/basic-data-types-c/submissions/code/1400823491
// Summary - Printing different inputs in different data types

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    
    printf("%d \n%ld \n%c \n%.3f \n%.9f",a,b,c,d,e);

    return 0;
}
