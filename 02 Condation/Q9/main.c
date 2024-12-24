#include <stdio.h>
#include <stdlib.h>

int main()
{
int l,b,area,par;
    printf("Enter Length of Rectangle  : ");
    scanf("%d",&l);
    printf("Enter Breadth of Rectangle : ");
    scanf("%d",&b);
    area=(l*b);
    par=l+l+b+b;
    printf("\n\n");

if(area>par)
    printf("Rectangle is greater than its perimeter");
else
    printf("Rectangle is not greater than its perimeter");

printf("\n\n");


}
