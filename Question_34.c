// Write a C program to calculate mobile recharge bonus based on recharge amount.

#include <stdio.h>

int main()
{
    int recharge = 500;
    float bonus;
    if (recharge <= 200)
    {
        printf("No bonus!!!");
    }
    else if (recharge >= 200)
    {
        bonus = recharge * 10 / 100;
        printf("Your bonus is %.2f", bonus);
    }
    else if (recharge >= 500)
    {
        bonus = recharge * 15 / 100;
        printf("Your bonus is %.2f", bonus);
    }
    else
    {
        bonus = recharge * 15 / 100;
        printf(" you get 20% bonus");
    }
}