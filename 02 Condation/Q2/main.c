#include <stdio.h>
#include <stdlib.h>
int main()
{   int join , Cur,salary;
    printf("Enter salary of employee : ");
    scanf("%d",&salary);
    printf("Enter Joining Year of employee : ");
    scanf("%d",&join);
    printf("Enter Current Year of employee : ");
    scanf("%d",&Cur);
    int emp=Cur-join;

if(emp>3 && join<=Cur && Cur<=2022 && join>1999 )
    {salary=salary+2500;
    printf("\n\nToatl salary with 2500 PKR Bouns in pay and current pay is : %d\n",salary);}
else
    printf("");

if(emp<=3 && join<=Cur && Cur<=2022 && join>1999)
    printf("\nToatl salary of employee is : %d\n\n",salary);
else
    printf("\n");

if(Cur>2023||join<1999||join==1999||join>Cur)
    printf("You Enter Invalid Year! \n ",salary);
else
    printf("\n");}
