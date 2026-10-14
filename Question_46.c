// Write a C program to calculate currency conversion from rupees to dollars using a fixed exchange rate.

#include <stdio.h>

int main(){
    float rupees;
    printf("Enter the amount in rupees: ");
    scanf("%f", &rupees);
    float exchange_rate;
    printf("Enter the current exchange rate : ");
    scanf("%f", &exchange_rate);
    
    float dollar = rupees/exchange_rate;

    printf(" %.2f rs. is %.2f dollar.", rupees, dollar);
}