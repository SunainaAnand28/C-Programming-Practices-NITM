// Write a C program to calculate insurance premium based on age and risk category.

#include <stdio.h>

int main(){

    int age;
    printf("Enter the marks : ");
    scanf(" %d", &age);
    char Risk[10];   
    if (age >= 30){
        Risk[10] = "Low";
        printf("Risk is %c , you get Premium.", Risk);
    } else{
     printf("Risk is higher, you do not get Premium!!!!!");
    }
}