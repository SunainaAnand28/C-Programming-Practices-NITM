// : Write a C program to assign grades based on marks using an if-else ladder. Marks above 90 get A+, above 75 get A, above 60 get B and remaining get C.

#include <stdio.h>

int main(){
    int marks = 82;

    {
        if(marks>=90){
            printf("your grade is A+.");
        } else if (marks >=75 )
        {
            printf("Your grade is A.");
        } else if (marks >=60 )
        {
            printf("Your grade is C.");
        }
        else
        {
            printf("Your grade is C.");
        }
    }
}