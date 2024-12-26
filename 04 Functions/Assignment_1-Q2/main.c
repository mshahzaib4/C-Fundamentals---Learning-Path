#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b=5;
    left_angle(b);
    step2_angle(b);
}
void left_angle(int b)
{
for(int i=1;i<=b;i++)
{
for(int c=1;c<=b;c++)
        printf("  ");
        {
for(int d=1;d<=i;d++)
        printf("*");
        }
        printf("\n");
        }


}
void step2_angle(int b)
{                 //5
for(int i=1;i<=b;i++)
       {             //5
for(int c=1;c<=b;c++)
        printf("  ");

        {
for(int d=5;d>=i;d--)
        printf("*");
        }
        printf("\n");
        }


}
