// Write a C program to check whether a person receives senior citizen benefit. Age should be 60 or above.


#include <stdio.h>

int main(){
    int Age = 65;
    if (Age>= 60){
        printf("The person is eligible for senior citizen benifits");
    } else {
        printf("The person is not eligible for senior citizen benifits.");
    }

}