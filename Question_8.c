// C program to display the memory size of int, float, char and double data types.

#include <stdio.h>

int main(){
    printf("The size of integer datatype is %zu bytes\n", sizeof(int));
    printf("The size of float datatype is %zu bytes\n", sizeof(float));
    printf("The size of char datatype is %zu bytes\n", sizeof(char));
    printf("The size of double datatype is %zu bytes", sizeof(double));

}