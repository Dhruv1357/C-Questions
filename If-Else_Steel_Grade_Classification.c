/*
Problem - If-Else Steel Grade Classification
Platform - HackerRank
Summary - Giving steel grade based on the given conditions
*/

#include <stdio.h>

int main() {
    short h;
    float c;
    int t;
    scanf("%hd %f %d",&h,&c,&t);
    
    if(h>50)
    {
        if(c<.7)
        {
            if(t>5600)
            {
                printf("The grade of the steel is: 10\nAll of the conditions met.");
            }
            else
            {
                printf("The grade of the steel is: 9\nTwo conditions met.");   
            }
        }
        else if(t>5600)
        {
            printf("The grade of the steel is: 7\nTwo conditions met.");
        }
        else
        {
            printf("The grade of the steel is: 6\nOnly one condition met.");    
        }
    }
    else if(c<.7)
    {
        if(t>5600)
        {
            printf("The grade of the steel is: 8\nTwo conditions met.");
        }
        else
        {
            printf("The grade of the steel is: 6\nOnly one condition met.");
        }
    }
    else if(t>5600)
    {
        printf("The grade of the steel is: 6\nOnly one condition met.");
    }
    else
    {
        printf("The grade of the steel is: 5\nNone of the conditions met.");
    }
  
    return 0;
}