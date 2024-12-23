#include <stdio.h>
#include <stdlib.h>

int main()
{   int cost=0,qu=1,items;float disfinal;
    printf("Enter Cost of Items : ");
    scanf("%d",&cost);
    printf("Enter Quantity : ");
    scanf("%d",&qu);
    float dis=cost*qu;

    if(dis>1000)
    {disfinal=(dis/100)*10;
    disfinal=dis-disfinal;
    printf("\n\nTotal Bill with 10 percent discount is : %4.2f\n\n",disfinal);}

    else
        printf("\n\nTotal Bill : %4.2f\n\n",dis);
}
