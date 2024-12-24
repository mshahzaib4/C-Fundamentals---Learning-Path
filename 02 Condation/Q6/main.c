#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{  int Years;
    char b,c;
    printf("Enter The Qualification ( Post ->p ): ");
    b=getche();
    printf("\nEnter Gender:- ( Male:m && Female:f) : ");
    c=getche();
    printf("\nEnter The Number of years: ");
    scanf("%d",&Years);
    if ((Years>=10)&&(b=='p')&&(c=='m'))
        printf("Salary 15000");
    if ((Years>=10)&&(b=='g')&&(c=='m'))
        printf("Salary 10000");
    if ((Years<10)&&(b=='p')&&(c=='m'))
        printf("Salary 10000");
    if ((Years<10)&&(b=='g')&&(c=='m'))
        printf("Salary 7000");
    if ((Years>=10)&&(b=='p')&&(c=='f'))
        printf("Salary 12000");
    if ((Years>=10)&&(b=='g')&&(c=='f'))
        printf("Salary 9000");
    if ((Years<10)&&(b=='p')&&(c=='f'))
        printf("Salary 10000");
    if ((Years<10)&&(b=='g')&&(c=='f'))
        printf("Salary 6000");

    }
