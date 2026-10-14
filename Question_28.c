// Write a C program to calculate salary after adding bonus and tax deduction.



#include <stdio.h>

int main()
{
    int salary, experience;

    printf("Enter the salary");
    scanf(" %d", &salary);

    printf("Enter the Experience in Years. ");
    scanf(" %d", &experience);
    
    float bonus, tax, final_salary;
    if (experience >= 5)
    {
        bonus = salary * 10 / 100;
        tax = salary*18/100;
        final_salary = salary + bonus - tax; 
        printf("final salary with %.2f  bonus and %.2f tax deduction is  = %.2f",bonus, tax, final_salary);
        
    }
    else
    {
        bonus = salary * 5 / 100;
        tax = salary*18/100;
        final_salary = salary + bonus - tax; 

        printf("final salary with %.2f  bonus and %.2f tax deduction is  = %.2f",bonus, tax, final_salary);
    }
}