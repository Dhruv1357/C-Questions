/*
Problem - Voting Eligibilty
Platform - HackerRank
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
