/*18. The distance between two cities (in km.) is input through the keyboard.
Write C code to convert and print this distance in meters, feet, inches and
centimeters.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("------------------------Assignment2---------------------------\n");
    int KM,meters,feet,inches,centimeters;
    printf("Enter the distance between two cities in (KM) : ");
    scanf("%d",&KM);
    meters=KM*1000;
    feet=KM*3280.839895;
    inches=KM*39370.078;
    centimeters=KM*100000;
    printf("Meters = %d",meters);
    printf(" Meters");
    printf("\nFeet = %d",feet);
    printf(" Feet");
    printf("\nInches = %d",inches);
    printf(" Inches");
    printf("\nCentimeters = %d",centimeters);
    printf(" Centimeters");


}
