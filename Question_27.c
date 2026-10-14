// Write a C program to calculate employee bonus. Employees with more than 5 years experience get 10% bonus otherwise 5%.

#include <stdio.h>

int main()
{
    int salary, experience;
    printf("Enter the salary");
    scanf(" %d", &salary);

    printf("Enter the Experience in Years. ");
    scanf(" %d", &experience);

    float bonus;
    if (experience >= 5)
    {
        bonus = salary * 10 / 100;
        printf("Bonus = %.2f", bonus);
    }
    else
    {
        bonus = salary * 5 / 100;
        printf("Bonus = %.2f", bonus);
    }
}