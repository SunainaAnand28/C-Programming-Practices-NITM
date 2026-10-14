// Program in C to calculate body mass index (BMI) of a person using height and weight.

#include <stdio.h>

int main(){
    float weight, height;
    weight = 70;
    height = 1.75;

    float BMI = weight/(height*height);

    printf("The BMI is %.2f", BMI);
    return 0;
}