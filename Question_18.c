// Write a C program to calculate profit or loss when cost price and selling price are given.

#include <stdio.h>

int main(){
    int cp,sp;
    cp = 500;
    sp = 700;
    int profit,loss;
    if (cp>sp){
       loss = cp - sp;
       printf("Loss is %d", loss);
    } else {
        profit = sp -cp;
        printf("Profit is %d", profit);
    }

}