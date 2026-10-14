// Write a C program to calculate movie ticket price based on age category using conditions.

#include <stdio.h>

int main()
{

    int age = 10;

    if (age <= 10)
    {
        printf("For children below 10 ticket price : 15 rs.");
    }
    else if (age <=60 )
    {
        printf("For senior citizen over 60 ticket price : 15 rs.");
    }
    else{
        
        printf("Ticket price: 25 rs.");
    }
    