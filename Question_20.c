// Write a C program for a shopping mall billing system. Premium members get 20% discount and regular members get 10% discount if purchase exceeds 5000.

#include <stdio.h>

int main()
{
    int amount = 4000;
    char membership[] = "premium";
    int discount;
    int final_price;

    if ((amount >= 5000) || (membership != "premium"))
    {
        discount = amount * 10 / 100;
        final_price = amount - discount;
        printf("Original Price: %d \nThe final price after discount is %d", amount, final_price);
    }
    else if (membership == "regular" && amount <5000)
    {
        printf("You do not get any discount.");
    }
    else
    {
        discount = amount * 20 / 100;
        final_price = amount - discount;
        printf("You are a premium member you get extra discount!! \n Your bill is : %d", amount);
    }
}