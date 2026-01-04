/*
Problem - Same Last Digits
Platform - HackerRank
Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/check-if-two-numbers-have-same-last-digit/submissions/code/1401413382
Summary - Checking if two numbers have same last digtis or not
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int check(int a,int b){
        if((a%10)==(b%10))
        {
            printf("YES");
        }
        else{
          printf("NO");
        }
        return 0;
    }
int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    
    check(a,b);
  
    return 0;
}
