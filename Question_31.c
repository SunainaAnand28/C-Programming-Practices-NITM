// Write a C program to demonstrate explicit type casting by finding accurate division result.

#include <stdio.h>

int main(){
    int a = 5;
    int b =2;

    float result1;
    result1 = (float)a/b;
    printf("%.2f", result1);
}