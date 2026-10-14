// Write a C program to calculate electricity subsidy eligibility based on units consumed and income category.

#include <stdio.h>

int main(){
    int income, units_consumed;
    income = 25000;
    units_consumed = 80;

    if((income <= 50000)&& (units_consumed <= 150)){
        printf("Subsidy Available!!!");
    } else{
        printf("Subsidy not available!1");
    }
}