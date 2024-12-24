#include <stdio.h>
#include <stdlib.h>
main()
{
int a;
char ma,ge;
printf("Enter Status Married( M ) Unmarried ( U ): ");
ma=getche();
printf("\nEnter Gender: ");
ge=getche();
printf("\nEnter Age: ");
scanf("%d",&a);

if( (( ma=='u' || ge=='m' && a>=30 ) || ( ma=='u' || ge=='f' && a>=25 ))   || ma=='m'  )
   printf("Insured");
else
    printf("Not Insured");

}
