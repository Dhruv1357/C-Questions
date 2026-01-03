// Problem - Area of Rectangle
// Platform - HackerRank
// Link - https://www.hackerrank.com/contests/peacemakers-25b-blr/challenges/area-of-a-rectangle-7/submissions/code/1400739688
// Summary - Finding the area of a rectangle.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length,int breadth)
{
    int area=length*breadth;
    printf("The area is: %d units",area);
    return 0;
}
int main() {
    int length;
    int breadth;
    scanf("%d %d",&length,&breadth);
    
    area(length,breadth);
    return 0;
}