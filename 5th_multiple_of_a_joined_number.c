// Problem - 5th of a joined number
// Platform - HackerRank
// Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/build-4-digit-number-from-4-inputs/submissions/code/1400823782
/* Summary - Combining four individual numbers to create a single number and then multiplying it with 5 and 
             printing the output*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a,int b,int c,int d){

        int Number=a*1000+b*100+c*10+d;
        printf("The number is: %d",Number*5);
    return 0;
}

int main() {
    int p,q,r,s;
    scanf("%d %d %d %d",&p,&q,&r,&s);
    buildNumber(p,q,r,s);
 
    return 0;
}
            