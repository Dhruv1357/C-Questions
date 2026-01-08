/*
Problem - Bitwise swap two numbers
Platform - HakcerRank
Summary - Swapping two numbers using bitwise operations
*/

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d\n%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}