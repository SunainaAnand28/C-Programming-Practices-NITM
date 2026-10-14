// Write a C program to display traffic action based on signal character R, Y and G.

#include <stdio.h>

int main(){
    char signal;
    printf("Enter the signal (R, Y, G) : ");
    scanf(" %c", &signal);

    switch(signal){
        case 'R':
        printf("STOP");
        break;
        case 'Y':
        printf("READY");
        break;
        case 'G':
        printf("GO");
        break;
    }
}