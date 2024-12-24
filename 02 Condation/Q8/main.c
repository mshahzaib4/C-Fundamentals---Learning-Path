#include <stdio.h>
#include <stdlib.h>

int main()
{   float x1,x2,x3,y1,y2,y3,m1,m2;

    printf("X1 : ");
    scanf("%f",&x1);

    printf("X2 : ");
    scanf("%f",&x2);

    printf("X3 : ");
    scanf("%f",&x3);

    printf("Y1 : ");
    scanf("%f",&y1);

    printf("Y2 : ");
    scanf("%f",&y2);

    printf("Y3 : ");
    scanf("%f",&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    printf("%f \n%f ",m1,m2);


if(m1==m2)
    printf("\n\nPoints fall in straight line\n\n");
else
     printf("\n\nPoints not fall in straight line\n\n");



}
