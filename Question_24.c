// Write a C program to create a simple calculator using switch-case. The user enters two numbers and an operator.

#include <stdio.h>

int main(){

    int A;
    printf("enter the first number : ");
     scanf("%d", &A);

    char operator;
    printf("enter the Operator (+, -, *, /) : \n");
     scanf(" %c", &operator);

    int B;
    printf("enter the second number : ");
     scanf("%d", &B);
    
     float result;
    
     switch(operator){
        case '+':
        result = A + B;
        printf("%d + %d = %.2f", A, B, result);
        break;
        case '-':
        result = A - B;
        printf("%d - %d = %.2f", A, B, result);
        break;
        case '*':
        result = A * B;
        printf("%d * %d = %.2f", A, B, result);
        break;
        case '/':
        result = A / B;
        printf("%d / %d = %.2f", A, B, result);
        break;
        default:
            printf("Error: Invalid operator '%c'.\n", operator);    
     }
     return 0;      

}