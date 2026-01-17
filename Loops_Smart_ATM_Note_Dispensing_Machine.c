/*
Problem - Loops Smart ATM Note Dispensing Machine
Platform - HackerRank
Summary - Printing how many notes of a given type are required for giving out the asked money
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A;
    scanf("%d",&A);
    
    int X,Y,Z;
    
    if(A>0 && A%100==0)
    {
        X=A/500;
        Y=(A-(X*500))/200;
        Z=(A-(X*500)-(Y*200))/100;
        
        printf("500-rupee notes: %d\n200-rupee notes: %d\n100-rupee notes: %d",X,Y,Z);
    }
    else
        printf("Invalid amount");

    return 0;
}
