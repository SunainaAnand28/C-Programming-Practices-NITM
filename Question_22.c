// Write a C program to calculate electricity bill using slabs: first 100 units at Rs.5, next 100 units at Rs.7 and above 200 units at Rs.10.

#include <stdio.h>

int main(){
    int unit = 250;
    float bill;  
    if(unit <=100){
        bill = unit*5;
        printf("Bill for %d units is %.2f", unit, bill);
    } else if (unit<=200 ){
         bill = unit*7;
        printf("Bill for %d units is %.2f", unit, bill);
    } else{
        bill = unit*10;
        printf("Bill for %d units is %.2f", unit, bill);
    }

}