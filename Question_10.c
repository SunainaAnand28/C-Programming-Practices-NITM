// Write a C program to demonstrate the use of typedef by creating a new name for float and calculating average marks.

#include <stdio.h>

typedef float decimal;
int main(){
   int a= 80;
   int b= 90;

   decimal average_marks = (a+b)/2;
   printf("Average marks = %.2f", average_marks);

}