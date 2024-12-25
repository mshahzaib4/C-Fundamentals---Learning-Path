#include <stdio.h>
#include <stdlib.h>

int main()
{   int  c,d;
    for(int a=6;a>=1;a--)
    {
        for(int b=1;b<=a;b++)
          {
            for(b=1;b<=a;b++)
            printf(" ");

        for( c=6; c>=a;c--)
           { for( c=6; c>=a;c--)
             printf("*");

           }
          }
        printf("\n");

    }
/*
for(int a=1;a<=5;a++)
    {
        for(int b=0;b<=a;b++)
          {
            for(b=-1;b<=a;b++)
            printf(" ");

        for( c=5; c>=a;c--)
           { for( c=5; c>=a;c--)
             printf("* ");
           }
          }
          printf("\n");

    }*/

}
