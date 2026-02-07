/*
Problem - Only One Digit
Platform - CodeForces
Summary - Finding the smallest non-negative integer such that the given number and found number share at least one common digit.
*/

#include <stdio.h>

int main()
{
    int x, digits = 1, d1 = 0, d2 = 0, d3 = 0;
    scanf("%d", &x);

    if (x < 1000 && x>0)
    {
        for (int i = 0; i < 3; i++)
        {
            if (digits == 1)
            {
                d3 = x % 10;
            }
            else if (digits == 2)
            {
                d2 = x % 10;
            }
            else if (digits == 3)
            {
                d1 = x % 10;
            }
            x /= 10;
            if(x==0)
            break;
            digits++;
        }
    }
    else if(x==1000)
    {
        printf("0");
        return 0;
    }
    

    if(digits==1)
    {
        printf("%d",d3);
    }
    else if(digits==2)
    {
        if(d2>d3)
        printf("%d",d3);
        else
        printf("%d",d2);
    }
    else
    {
        if(d1<=d2 && d1<=d3)
        printf("%d",d1);
        else if(d2<=d1 && d2<=d3)
        printf("%d",d2);
        else if(d3<=d1 && d3<=d2)
        printf("%d",d3);
    }
    return 0;
}