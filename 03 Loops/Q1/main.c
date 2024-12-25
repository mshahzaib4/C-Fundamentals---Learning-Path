#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{   int x,y;
    printf("Enter Number X:");
    scanf("%d",&x);
    printf("Enter Number Y:");
    scanf("%d",&y);

    int pow1=pow(x,2);
    printf("%d",pow1);
if(pow1==y)
    //printf("%d is Multiple of %d",pow1,y);
        printf("True");
else
    printf("False");

}
