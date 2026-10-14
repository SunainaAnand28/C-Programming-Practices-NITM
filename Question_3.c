// C program to calculate the electricity bill of a house when the number of units consumed and cost per unit are given.

//Input
// unit = 120
// rate = 6

#include <stdio.h>

int main(){
  int unit, rate;
  unit = 120;
  rate = 6;
  float bill = unit*rate;
  printf("The electricity bill is : %.2f", bill);

}
