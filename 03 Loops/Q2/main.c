#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
  printf("Enter Number :");
  scanf("%d",&num);

  printf("\n\n");
if(num>0 && num%2==0)
    printf("%d is Positive Even Number!",num);

else if(num>0 && num%2==1)
    printf("%d is Positive  Odd  Number!",num);

else if(num<0 && num%2==0)
    printf("%d is Negative Even Number!",num);
else if(num>0 && num%2==1)
    printf("%d is Negative Odd Number!",num);
else if(num==0)
printf("You Enter ZERO!");
else
    printf("You Enter incorrect");
    printf("\n\n");
}
