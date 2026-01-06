/*
Problem - Convert Time to Seconds
Platform - HackerRank
Summary - Converting hours,minutes and seconds to only seconds.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds(int hours, int minutes, int seconds)
{
    hours=hours*3600;
    minutes=minutes*60;
    int res=hours+minutes+seconds;
    printf("Total seconds: %d",res);
    return res;
}
int main() 
{
    int hours;
    int minutes;
    int seconds;
    scanf("%d %d %d",&hours,&minutes,&seconds);
    
    toSeconds(hours,minutes,seconds);

    return 0;
}