/*
Problem - If-Else_Roots of a Quadratic Equation
Platform - HackerRank
Summary - FInding the roots of a quadratic equation whose a,b and c are given
*/

#include <stdio.h>
#include <math.h>

    short roots(short a, short b, short c)
    {
        float D=(b*b - 4*a*c);
        float rootD;
        if(D>=0)
            rootD=sqrt(D);
        else
            rootD=sqrt(-D);
        
        float root1,root2;
        float root1b,root2b;
        float root1d,root2d;
        
        
        if(D>0)
        {
            root1= (-b+rootD)/(2.0*a);
            root2= (-b-rootD)/(2.0*a);
            printf("Roots: %.2f, %.2f\nType: Real and Distinct",root1,root2);
        }
        else if(D==0)
        {
            root1= (-b)/(2.0*a);
            root2=root1;
            printf("Roots: %.2f, %.2f\nType: Real and Equal",root1,root2);
        }
        else
        {
            root1b= (-b)/(2.0*a);
            root1d= (rootD)/(2.0*a);
            root2b= (-b)/(2.0*a);
            root2d= (rootD)/(2.0*a);
            printf("Roots: %.2f + %.2fi, %.2f - %.2fi\nType: Complex",root1b,root1d,root2b,root2d);
        }
        return 0;
    }
int main() {
    short a,b,c;
    scanf("%hd %hd %hd",&a,&b,&c);
    if(a == 0)
    {
        return 0;
    }
    roots(a,b,c);
    
    return 0;
}