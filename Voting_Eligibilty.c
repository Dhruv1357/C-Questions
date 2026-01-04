/*
Problem - Voting Eligibilty
Platform - HackerRank
Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/voting-eligibility-4/submissions/code/1401413441
Summary - Checking whether a person is eligible for voting or not based on his/her age
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
int main() {
    int age;
    scanf("%d",&age);
    
    if(age<18)
    {
        printf("Not Eligible");
    }
    else
    {
        printf("Eligible");
    }

    return 0;
}
