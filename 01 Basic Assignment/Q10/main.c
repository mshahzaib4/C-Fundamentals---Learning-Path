/*10. Find discriminant of quadratic equation
Hint D=b2-4ac.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n::::::::::::PROGRAM10::::::::::::\n");
    printf("::::::::Discriminant value:::::::\n\n");
    int B_D,Area,C;
    printf("Enter The Middle Number the Number Next to the 'X' E.g The Value Of B : ");
    scanf("%d",&B_D);
    printf("Enter The Value Of 'Area' A : ");
    scanf("%d",&Area);
    printf("Enter The Value of C : ");
    scanf("%d",&C);
    int discri=B_D*B_D-4*(Area*C);
    printf("Discriminant value is %d",discri);

}
