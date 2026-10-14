// Write a C program to calculate water tank status. Display Empty, Normal or Full based on water percentage.


#include <stdio.h>

int main()
{
    int water_Level_percentage = 10;

    if (water_Level_percentage <= 10)
    {
        printf("Empty");
    }
    else if (water_Level_percentage <=60 )
    {
        printf("Normal");
    }
    else{
        
        printf("Full");
    }
    
}