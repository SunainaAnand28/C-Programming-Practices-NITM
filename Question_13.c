// Write a C program to check whether a person can get a driving license. The person must be at least 18 years old.

#include <stdio.h>

int main(){
    int Age = 18;
    if (Age>= 18){
        printf("The person is eligible for Driving.");
    } else {
        printf("The person is not eligible for driving.");
    }

}