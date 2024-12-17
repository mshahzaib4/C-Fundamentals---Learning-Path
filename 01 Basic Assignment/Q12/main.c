//Q12:Take two inputs from user and perform the operations addition, subtraction,quotient and remainder.
#include <stdio.h>
#include <stdlib.h>

int main()
{    printf("--------------------Assignment 2----------------------\n");
    int a,b;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);
    int sum=a+b;
    int Sub=a-b;
    float Q=a/b;
    int R=a%b;
    printf("Addition :%d\n",sum);
    printf("Subtraction :%d\n",Sub);
    printf("Quotient :%f\n",Q);
    printf("Remainder :%d\n",R);}
