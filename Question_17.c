// Write a C program to check whether a year is a leap year.

#include <stdio.h>

int main(){
    int year = 2024;
    
    if(((year%4 == 0) && (year%100 !=0)) || (year%400==0)){
        printf("The %d year is a Leap Year.", year);
    } else{
       printf("The %d year is not Leap year.", year);
    }
}