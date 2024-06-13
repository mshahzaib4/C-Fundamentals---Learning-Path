/*20. Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write C code to convert this temperature into Centigrade degrees.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{   printf("------------------------Assignment2---------------------------\n");
    printf("Temperature of a city in Fahrenheit degrees is input through the keyboard.");
    printf("Write C code to convert this temperature into Centigrade degrees\n");
    printf("---------------------------------------------------------------\n");
    int fr,input;
    printf("Enter Temperature : ");
    scanf("%d",&input);
    fr=(input-32)*5/9;
    printf("Temperature in centigrade is :%d",fr);}
