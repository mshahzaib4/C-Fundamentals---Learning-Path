/*6. Initialize two variables with 50 and 100
And print their values in this format
Value of first variable is 50 and value of second variable is 100*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("\n\n::::::::::::PROGRAM6::::::::::::\n");
    printf(":::::::::Swape the value::::::::\n\n");
    int x=50,y=100,z;
    z=x;x=y;y=z;
    printf("Value of first variable is :%d And Value of second Variable is: %d",x,y);
}
