// Write a C program to calculate attendance percentage and check eligibility for examination. Minimum attendance required is 75%.

#include <stdio.h>

int main(){
    float present_days, total_sessional_days;
    printf("Enter the total sessional working days : ");
    scanf("%f", &total_sessional_days);

    printf("Enter how many days you were present in class : ");
    scanf("%f", &present_days);
    
    float attendance = (present_days/total_sessional_days)*100;

    if (attendance >= 75){
        printf(" your attendance is %.2f percent and you are eligible for examination.", attendance);
    } else{
        printf(" your attendance is %.2f percent and you are not eligible for examination.", attendance);
    }


}
