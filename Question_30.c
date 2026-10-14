// Write a C program to demonstrate implicit type conversion by adding integer and floating point values.

#include <stdio.h>

int main(){
    int a = 10;
    float b =5.5;

    float result = a+b;
    printf("%.2f", result);
}