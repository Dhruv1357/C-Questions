/*
Problem - If-Else Treasure Hunt
Platorm - HakcerRank
Summary - Selecting different paths based on the given inputs by the user.
*/

#include <stdio.h>

int main() 
{
    short choice;
    scanf("%hd",&choice);
    short num;
    
    short guess;
    short flag=0;
    
    if(choice==1)
    {
        printf("Player chooses the Left path.\n");
        scanf("%hd",&choice);
        if(choice==1)
        {
            printf("Poor choice, Game Over!\n");
        }
        else
        {
            printf("Player found a bridge.\n");
            scanf("%hd",&choice);
            if(choice==1)
            {
                printf("Player crosses the bridge safely.\n");
                flag=1;
            }
            else
            {
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    
    else if(choice==2)
    {
        printf("Player chooses the Middle path.\n");
        scanf("%hd",&num);
        short ones=num%10;
    short tens=(num%100)/10;
    short hundereds=num/100;
        if((tens==(4*ones)) && (hundereds==(tens-3)) && ((ones+tens+hundereds)==15))
        {
            printf("Player solved the puzzle.\n");
            flag=1;
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
    }
   
    else
    {
        printf("Player chooses the Right path.\n");
        scanf("%hd",&guess);
        if(guess==30)
        {
            printf("Player solved the puzzle.\n");
            flag=1;
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
    }
    
    if(flag)
    {
        scanf("%hd",&choice);
        if(choice==1)
        {
            printf("All that glitters is not gold, Game Over!\n");
        }
        else if(choice==2)
        {
            printf("All your efforts were for nothing, Game Over!\n");
        }
        else
        {
            printf("Congratulations!! You won the treasure.\n");
        }
    }

    return 0;
}