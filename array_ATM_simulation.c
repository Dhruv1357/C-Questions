/*
Problem - Arrays_ATM Machine Simulation
Platform - HackerRank
Summary - Designing a menu driven ATM machine that takes input and do the selected operation
*/

#include <stdio.h>

int main() {
    short N,log=0;
    scanf("%hd",&N);
    short pin[N];
    int acc[N],balance[N],deposit,withdraw,user;
    char input;
    short userpin;
    int useracc,userbalance=0,userdata=-1;
    
    
    if(N>0)
    {
        for(int i=0;i<N;i++)
        {
            scanf("%d %hd %d",&acc[i],&pin[i],&balance[i]);
        }
    }
    
    if(N>0)
    {
        for(int i=1;i;i++)
        {
            scanf(" %c",&input);

            if(log==0)
            {
                if(input=='A')
                {
                    scanf("%d %hd",&useracc,&userpin);

                    for(int i=0;i<N;i++)
                    {
                        if((useracc==acc[i]) && (userpin==pin[i]))
                        {
                            log=1;
                            user=useracc;
                            userbalance=balance[i];
                            userdata=i;
                            printf("Welcome User %d\n",useracc);
                            break;
                        }
                    }
                    if(log==0)
                        printf("Wrong Credentials!\n");
                }
                else if(input=='B')
                {
                    printf("Login first!\n");
                }
                else if(input=='C')
                {
                    scanf("%d",&deposit);
                    printf("Login first!\n");
                }
                else if(input=='D')
                {
                    scanf("%d",&withdraw);
                    printf("Login first!\n");
                }
                else if(input=='E')
                {
                        printf("No user is currently logged in.\n");
                }
                else if(input=='F')
                {
                    printf("Exiting ATM. Thank you!\n");
                    break;
                }
            }


            else if(log==1)
            {
                if(input=='A')
                {   
                    int tempacc=0,temppin=0;
                    scanf("%d %hd",&tempacc,&temppin);
                    printf("User %d is already using the ATM.\n",user);
                }
                else if(input=='B')
                {
                    printf("Balance: Rs.%d\n",userbalance);
                }
                else if(input=='C')
                {
                    scanf("%d",&deposit);
                    userbalance+=deposit;
                    balance[userdata]=userbalance;
                    printf("New Balance: Rs.%d\n",userbalance);
                }
                else if(input=='D')
                {
                    scanf("%d",&withdraw);
                    if(withdraw>userbalance)
                        printf("Insufficient balance!\n");
                    else
                    {
                        userbalance-=withdraw;
                        balance[userdata]=userbalance;
                        printf("New Balance: Rs.%d\n",userbalance);
                    }
                }
                else if(input=='E')
                {
                        printf("Logged out successfully.\n");
                        log=0;
                        userdata=-1;
                }
                else if(input=='F')
                {
                        printf("Exiting the ATM without logging out is not allowed.\n");   
                }
                else
                    printf("Invalid choice. Please enter A, B, C, D, E, or F.\n");
            }

        }
    }
 
    return 0;
}