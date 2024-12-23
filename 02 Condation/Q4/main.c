#include <stdio.h>
#include <stdlib.h>
 main()
{   int a,b,c,d,e;float pr=0;
    printf("Computer : ");
    scanf("%d",&a);
    printf("English : ");
    scanf("%d",&b);
    printf("Urdu : ");
    scanf("%d",&c);
    printf("Math : ");
    scanf("%d",&d);
    printf("Pak-study : ");
    scanf("%d",&e);
if(a<=100 && a>=0 &&b<=100 && b>=0 &&c<=100 && c>=0 &&d<=100 && d>=0 &&e<=100 && e>=0)
    pr=(a+b+c+d+e)/500.0*100.0;
else
   {printf("\n\nYou enter Invalid");pr=0;}
if(pr>=60 && pr<=100.000000 )
    printf("\n\nYou got first division");
    else
    pr;
if(pr>=50 && pr<=59)
    printf("\n\nYou got Second division");
    else
    pr;
if(pr>=40 && pr<=49)
    printf("\n\nYou got Third division");
    else
    pr;
if(pr<40 && pr!=0 && pr>=0.000000)
    printf("\n\nSorry Your are Fail and Try again\n\n");

}
