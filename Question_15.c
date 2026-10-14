// Write a C program to find the largest among three numbers entered by the user.

#include <stdio.h>

int main()
{
    int A, B, C;
    A = 10;
    B = 5;
    C = 15;
    {

        if (A >= B && A>=C)
        {
            printf("A is Largest Number.");
        }
        else if (B >= A && B >= C )
        {
            printf("B is Largest.");
        }
        else
        {
            printf("C is Largest.");
        }
    }
}