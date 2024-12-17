/*9. Find distance between two points
Hint :sqrt((x2-x1)2 + (y2-y1)2)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("\n\n::::::::::::PROGRAM9::::::::::::\n");
    printf("::::::::::Find Distance:::::::::\n\n");

    float DX1,DX2,DY1,DY2,Result;
    printf("Enter Starting point of Distance X1:");
    scanf("%f",&DX1);
    printf("Enter Ending point of Distance X2:");
    scanf("%f",&DX2);
    printf("Enter Starting point of Distance Y1:");
    scanf("%f",&DY1);
    printf("Enter Ending point of Distance Y2:");
    scanf("%f",&DY2);
    float result_pwr=sqrt(pow(DX2,2)+pow(DY2,2));
    Result=sqrt((DX2-DX1)*(DX2-DX1)+(DY2-DY1)*(DY2-DY1));
    printf("Distance Between two point is %f\n",Result);
    printf("Distance Between two point is %f",result_pwr);

}
