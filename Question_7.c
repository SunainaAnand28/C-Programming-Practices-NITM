// Write a C program to display the ASCII value of a character entered by the user.

#include <stdio.h>

int main(){
    char character;
    printf("Enter the Character: ");
    scanf("%c", &character);
    
    printf("The ASCII value of %c is %d", character, character);


}