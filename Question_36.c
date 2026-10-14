// Write a C program to check divisibility of a number by 2 and 3.

#include <stdio.h>

int main(){
    int number;
    number = 25;

    if((number%2 == 0)&& (number%3 == 0)){
        printf("Number is divisible by 2 and 3 both.");
    } else{
        printf("Number is not divisible by 2 and 3 both.");
    }
}