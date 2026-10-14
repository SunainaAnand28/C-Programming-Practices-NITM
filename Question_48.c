// Write a C program to calculate final shopping bill using membership discount, coupon discount and tax.

#include <stdio.h>

int main()
{
    int amount = 10000;
    char membership[] = "premium";
    int discount;
    int final_price;
    int coupon_discount = (amount * 12) / 100;
    if ((amount >= 5000) || (membership != "premium"))
    {
        discount = amount * 10 / 100;
        final_price = amount - discount - coupon_discount;
        printf("Original Price: %d \nThe final price after discount is %d", amount, final_price);
    }
    else if (membership == "regular" && amount < 5000)
    {
        final_price = amount - coupon_discount;
        printf("You only get the coupon discount.\nOriginal Price: %d \nThe final price after discount is %d", amount, final_price);
    }
    else
    {
        discount = amount * 20 / 100;
        final_price = amount - discount - coupon_discount;
        printf("You are a premium member you get extra discount!! \n Your bill is : %d", amount);
    }
}