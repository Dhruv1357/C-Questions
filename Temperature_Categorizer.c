/*
Problem - Temperature Categorizer
Platform - HackerRank
Summary - Categorising the temperature into different categories based on some conditions
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    short t;
    scanf("%hd",&t);
    
    if(t<0 && t>= -100)
        printf("Freezing");
    else if(t>=0 && t<=30)
        printf("Normal");
    else if(t>30 && t<=100)
        printf("Hot");

    return 0;
}
