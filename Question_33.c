// Write a C program to find the smallest among three numbers.

#include <stdio.h>

int main()
{
    int A, B, C;
    A = 10;
    B = 25;
    C = 15;
    {

        if (A <= B && A<=C)
        {
            printf("A is Smallest Number.");
        }
        else if (B <= A && B <= C )
        {
            printf("B is Smallest.");
        }
        else
        {
            printf("C is Smallest.");
        }
    }
}