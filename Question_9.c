// Write a C program to calculate the final price of a product after adding GST. GST percentage should be stored as a constant.

#include <stdio.h>
int main(){
    int Price = 1000;
    int GST = Price*18/100;
    int Final_Price = Price + GST;
    printf("The Final Price of the product is %d", Final_Price);
}