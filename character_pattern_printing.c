/*
Problem - Character pattern printing
Summary - Printing characters in reverse order
*/

#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);

    for(char i=c;i>=65;i--)
    {
        for(char j=i;j>='A';j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}