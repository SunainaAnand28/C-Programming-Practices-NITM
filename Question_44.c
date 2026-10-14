// Write a C program to check triangle type using three sides.

#include <stdio.h>

int main(){
    int side_1, side_2, side_3;
    printf("enter the side 1 of triangle : ");
    scanf("%d", &side_1);

    printf("enter the side 2 of triangle : ");
    scanf("%d", &side_2);

    printf("enter the side 3 of triangle : ");
    scanf("%d", &side_3);

    if ((side_1== side_2)&& (side_2==side_3)){
        printf("The triangle is Equilateral.");
    } else {
        printf("Triangle is not equilateral.");
    }
    
}