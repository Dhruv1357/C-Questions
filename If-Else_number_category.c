/*
Problem - If-Else_Number Category
Platform - HackerRank
Summary - Classifying a given number into a category based on some given conditions.
*/

#include <stdio.h>

    int num(short n)
    {
        int i=1;
        int x=0;
        int flag=1;
        if(n%2==0 && n%3==0 && n%5!=0)
        {
            printf("A");
            flag=0;
        }
        else if(n>20 && n<78)
        {
            if(n%2==0)
            {
                x++;
            }
            if(n%3==0)
            {
                x++;
            }
            if(n%5==0)
            {
                x++;
            }
            if(n%7==0)
            {
                x++;
            }
            if(n%11==0)
            {
                x++;
            }
            
            if(x==2)
            {
                printf("B");
                flag=0;
            }
        }
        if(flag && (n>9 && n<100) && (n%3==0 || n%7==0) && ~(n%3==0 && n%7==0))
        {
            printf("C");
            flag=0;
        }
        else if(n<200 && flag)
        {
            while((i*i)!=n && (i<=14))
            {
                i++;
            }
            
            if(i<15)
            {
                printf("D");
                flag=0;
            }
        }
        if(flag)
        {
            printf("E");
        }
        return 0;
    }
int main() {
    short N;
    scanf("%hd",&N);
    num(N);

    return 0;
}