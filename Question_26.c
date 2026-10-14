// Write a C program to check whether a student has passed or failed. Passing marks are 40.

#include <stdio.h>

int main(){

    int marks;
    printf("Enter the marks : ");
    scanf(" %d", &marks);

    if (marks >= 40){
     printf("You are Passed!!!");
    } else{
     printf("You are Failed!!!!!");
    }
}