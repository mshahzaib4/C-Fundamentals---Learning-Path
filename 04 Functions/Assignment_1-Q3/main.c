#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=1,d=5;
    printf("  Class Room\n");
    step1(c,d);
    printf("  Faculty Room\n");
    step2(c,d);
    step2(c,d);
    printf("  CLass Room\n");
    step3(c,d);
}
void step1(int a,int b){
for(a=1;a<=b;a++)
{  for(int c=1;c<=b;c++)
    printf("  ");

    {
    for(int a=1;a<=b;a++)
    printf("#");
    printf("\n");}
}
}

void step2(int a,int b){
for(a=1;a<=b-3;a++)
{  for(int c=1;c<=b;c++)
    printf("  ");

    {
    for(int a=1;a<=b;a++)
    printf("#");
    printf("\n");}
}
}

void step3(int a,int b){
for(a=1;a<=b;a++)
{
for(int c=1;c<=b;c++)
    printf("  ");
{
    for(int a=1;a<=b+b;a++)
    printf("#");
    printf("\n");
}
}
}


