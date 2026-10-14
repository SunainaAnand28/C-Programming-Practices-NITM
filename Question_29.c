// Write a C program to calculate average of five values without using loops.

#include <stdio.h>

int main(){
   int a, b, c, d, e;
    int sum;
    float average;

    printf("Enter five values: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    average = sum / 5.0;

    printf("Average = %.2f\n", average);

    return 0;

}