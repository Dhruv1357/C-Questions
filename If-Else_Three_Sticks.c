/*
Problem - If-Else Three Sticks
Platform - HackerRank
Summary - Printing which triangle is possible based on the given lengths of three sticks
*/

#include <stdio.h>

int main() {
    long a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    printf("Lengths: [%ld, %ld, %ld]\n",a,b,c);
    
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a))
    {
        if(a==b && ((b==c)|(a==c)))
        {
            printf("Type: Equilateral\nAll sides are of the same length.");
        }
        else if((a==b)|(b==c)|(a==c))
        {
            printf("Type: Isosceles\nExactly two sides are equal.");
        }
        else
        {
            printf("Type: Scalene\nAll sides are of different lengths.");    
        }
    }
    else
    {
        printf("Type: Invalid\nCannot form a valid shape.");
    }

    return 0;
}