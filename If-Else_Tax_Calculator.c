/*
Problem - If-Else Tax Calculator
Platform - HackerRank
Summary - Calculating the tax to be payed based on the income and some constraints.
*/

#include <stdio.h>

int main() {
    float income;
    float taxable;
    float tax;
    scanf("%f",&income);
    
    if(income>=0 && income<=250000){
        printf("0.00");
    }
    else if(income>250000 && income<=500000){
        taxable=income-250000;
        tax=taxable*.05;
        printf("%.2f",tax);
    }
    else if(income>500000 && income<=1000000){
        taxable=income-500000;
        tax=(250000*.05)+(taxable*0.2);
        printf("%.2f",tax);
    }
    else if(income>1000000){
        taxable=income-1000000;
        tax=(250000*0.05)+(500000*0.2)+(taxable*.3);
        printf("%.2f",tax);
    }
    else{
        printf("INVALID");
    }
  
    return 0;
}