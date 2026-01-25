/*
Problem - Numbers_Find the Nth Prime
Platform - HackerRank
Summary - Finding the n-th prime number
*/

#include <stdio.h>
#include <math.h>

    int num(unsigned short n)
    {
        int flag=1;
        int number;
        int composite=1;
        for(number=2;number;number++)
        {
           composite=0;
            for(int i=2;i<number;i++)
            {
                if(number%i==0)
                {
                    composite=1;
                    break;
                }
            }
            if(number!=2)
                if(composite==0)
                    flag++;
            if(flag==n)
                break;
            
        }
        printf("%d",number);
        return 0;
    }
int main() {
    unsigned short n;
    scanf("%hd",&n);
    num(n);

    return 0;
}