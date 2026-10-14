// Write a C program to design a digital wallet transaction system. Accept balance and withdrawal amount. Allow transaction only when sufficient balance is available.


#include <stdio.h>

int main(){

    int balance, withdraw;

    printf("Enter the balance : ");
    scanf("%d", &balance);

    printf("Enter the amount you want to withdraw : ");
    scanf("%d", &withdraw);
    
    int remaining_balance = balance - withdraw; 

    if (balance <withdraw){
        printf("Your account balance is not sufficient to withdraw money. Your Current BALANCE is :  %d ", remaining_balance);
    } else{
        printf("Transaction successful. Remaining BALANCE : %d", remaining_balance);
    }


}
