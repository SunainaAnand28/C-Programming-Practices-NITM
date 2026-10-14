// Write a C program to calculate discount for a shopping customer. Give 20% discount if purchase amount is above 5000 otherwise no discount.

#include <stdio.h>

int main(){
    int amount = 6000;
    int discount;
    int final_price;
    if (amount >=6000){
       discount = amount*20/100; 
       final_price = amount-discount;
       printf("Original Price: %d \nThe final price after discount is %d", amount, final_price);   
    } else{
         printf("You do not get any discount!! \n Your bill is : %d", amount);
    }
}