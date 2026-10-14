// Write a C program to calculate hotel bill with discount for customers staying more than a fixed number of days.

#include <stdio.h>

int main()
{
    int days = 5;
    float bill = days*1000;
    int discount;
    int final_bill;

    if (days <= 5)
    {
        discount = 10;
        final_bill = bill - discount;
        printf(" final bill is %d.", final_bill);
    }
    if (days >= 5)
    {
        discount =  20;
        final_bill = bill - discount;
        printf(" final bill is %d.", final_bill);
    }
    else if (days >=10)
    {
        discount = 30;
        final_bill = bill - discount;
        printf(" final bill is %d.", final_bill);
    }
    else
    {
        days = 50;
        final_bill = bill - discount;
        printf(" final bill is %d.", final_bill);
    }
}