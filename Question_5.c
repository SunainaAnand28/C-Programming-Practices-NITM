// Program in C to calculate simple interest for a bank customer.

/*
principal = 10000;
   rate = 5;
   time = 2;
*/

#include <stdio.h>

int main(){
   float principal, rate, time;
   principal = 10000;
   rate = 5;
   time = 2;
   
   float simple_interest = (principal*rate*time)/100;
   
   printf("Simple Interest: %.2f", simple_interest);
   return 0;
}
// Output = 1000;
