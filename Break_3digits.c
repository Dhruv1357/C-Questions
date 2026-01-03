// Problem - Break a 3 Digit Number into Individual Digits
// Platform - HackerRank
// Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/break-3-digit-number-into-individual-digits/submissions/code/1400774855
// Summary - Breaking a 3 digit number into individual digits

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int n){
    int first=n/100;
    int second=(n%100)/10;
    int third=(n%100)%10;
    printf("%d %d %d",first,second,third);
}
int main() {
    
    int number;
    scanf("%d",&number);
    split(number);
 
    return 0;
}
