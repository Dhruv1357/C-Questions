// Problem - lowercase to UPPERCASE
// Platform - HackerRank
// Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/challenge-8-a-lowercase-to-uppercase
// Summary - Converting lowercase characters to UPPERCASE characters.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char charLower;
    scanf("%c", &charLower);
    int charUpper=charLower-32;
    printf("The uppercase of %c is %c", charLower,charUpper);
    return 0;
}