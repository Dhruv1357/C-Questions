/*
Problem - Two numbers coprime
Summary - Checking if two numbers are coprime or not
*/

#include <stdio.h>

int main(){
    int a,b,coprime=1;
    scanf("%d %d",&a,&b);

    for(int i=2;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            coprime=0;
            break;
        }
    }
    if(coprime==0)
    {
        printf("%d and %d are not coprime",a,b);
    }
    else
    {
        printf("%d and %d are coprime",a,b);
    }
    return 0;
}