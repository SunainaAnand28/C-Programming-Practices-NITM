// C program to print area and parameter of a rectangular room.
// lenght = 10
// breadth = 5

#include <stdio.h>

int main(){
   int l,b;
   l=10;
   b=5;
   
   int area = l*b;
   int parimeter = 2*(l+b);
   printf("The area of the rectangle is = %d\n", area);
   printf("The parimeter of the rectangle is = %d\n", parimeter);
}
//Output After Execution 
//The area of the rectangle is = 50
//The parimeter of the rectangle is = 30

