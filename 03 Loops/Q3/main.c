#include <stdio.h>
#include <stdlib.h>

int main()
{   float wight,calories; char  life_style;
    printf("Enter your life style is ( ( Active :- A ) or ( Sedentary :- S) ) : ");
    life_style=getche();
    printf("\nEnter weight : ");
    scanf("%f",&wight);

    printf("\n\n");
    if(life_style=='A' || life_style=='a' && wight>0 )
      {calories=15*wight;      printf("%2.3f Calories you need each day...",calories);}

   else if(life_style=='S' || life_style=='s' && wight>0)
     {calories=13*wight;       printf("%2.3f Calories you need each day...",calories);}
    else
        printf("You Enter Invalid");

    printf("\n\n");







}
