/*
Problem - Loops_Lucky Bhaskar
Platform - HackerRank
Summary - Calculating after how many days does Lucky exits from the lottery.
*/

#include <stdio.h>

int main()
{
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    
    double amount = x;
    double minAmount = x;
    double stopLimit = 0.40 * x;
    double luckyLimit = 0.70 * x;
    
    int i;
    
    for(i = 1; i <= n; i++)
    {
        if(i % 6 == 0)
        {
            amount = amount * 1.70;
                
            if(amount < minAmount)
                minAmount = amount;
                
            i = i + 7;
            if(i > n)
                break;
                
            i--;
        }
        else if(i % 2 == 0)
        {
            amount = amount * 0.875;
        }
        else if(i % 3 == 0)
        {
            amount = amount * 0.80;
        }
        else
        {
            amount = amount * 0.90;
        }
        
        if(amount < minAmount)
            minAmount = amount;
            
        if(amount < stopLimit)
            break;
    }
    
    if(i > n)
        printf("After %d days: %.2lf\n", n, amount);
    else
        printf("Stopped early after %d days: %.2lf\n", i, amount);
    
    printf("Minimum amount held by Bhaskar: %.2lf\n", minAmount);
    
    if(amount > luckyLimit)
        printf("Lucky Bhaskar\n");
    else
        printf("Better Luck Next Time!\n");
    
    return 0;
}