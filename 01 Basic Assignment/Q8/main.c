/*8. Take three inputs from user and divide first by second and divide answer by
third input*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n\n\t\t::::::::::PROGRAM8::::::::::\n");
    printf("::::::::::Divide First by Second And Answer by Third::::::::::\n\n");
    float first,second,trd;
    printf("Enter First Number: ");
    scanf("%f",&first);
    printf("Enter Second Number: ");
    scanf("%f",&second);
    printf("Enter Third Number: ");
    scanf("%f",&trd);
    float first_second=first/second;
    printf("Answer is: %f",first_second/trd);
}
