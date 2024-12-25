#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("Enter Number : ");
    scanf("%d",&num);
if(num%2==0)
     num=num/2;
else if(num%2==1)
        num=3*num+1;
else
        printf("Enter Invalid");

printf("%d",num);

}


