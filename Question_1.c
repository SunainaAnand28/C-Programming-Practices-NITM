// C program to calculate the percentage of a student.
// The program should accept input from the user.

#include <stdio.h>

int main(){
   int marks_in_english, marks_in_maths, marks_in_physics;
   
   // Marks in English
   printf("Enter the obtained marks in English: ");
   scanf("%d", &marks_in_english);
   
   // Marks in Mathematics
   printf("Enter the obtained marks in Mathematics: ");
   scanf("%d", &marks_in_maths);
   
   //Marks in Physics
   printf("Enter the obtained marks in Physics: ");
   scanf("%d", &marks_in_physics);
   
   int total = marks_in_english + marks_in_maths + marks_in_physics;
   float percentage = (total/3);
   
   printf("The Total Percentage is =  %.2f", percentage);
   
   return 0;
}
