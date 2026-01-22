/*
Problem - If-Else Days in Month & Year
Platform - HackerRank
Summary - Printing the number of days in a given month based on some conditions
*/

#include <stdio.h>
#include <string.h>

int main() {
    int month;
    int year;
    scanf("%d\n%d",&month,&year);
    
    if(year>0)
    {
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            printf("31");
        else if(month==4 || month==6 || month==9 || month==11)
            printf("30");
        else if(month==2)
            if((year%4==0 && year%100!=0) || (year%400==0))
                printf("29");
            else
                printf("28");
        else
            printf("Invalid Month");        
    }
    else
        if(month<1 || month>12)
            printf("Invalid Month\nInvalid Year");
        else
            printf("Invalid Year");
   
    return 0;
}