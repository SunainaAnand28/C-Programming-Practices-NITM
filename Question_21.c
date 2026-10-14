// Write a C program to check bank loan eligibility. A person is eligible if age is at least 21 and salary is at least 30000.

#include <stdio.h>

int main(){
    int age, salary;
    age = 25;
    salary = 50000;

    if((age>=21)&& (salary >= 30000)){
        printf("You are eligible for bank loan.");
    } else{
        printf("You are not eligible for bank loan.");
    }
}