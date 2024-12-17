#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{      printf("::::::Formula(-b-sqrt(b2-4ac))/2a:::::\n\n");
    float B,A,C;
    printf("Enter the Value Of  A: ");
    scanf("%f",&A);
    printf("Enter The Value Of  B: ");
    scanf("%f",&B);
    printf("Enter The Value of C : ");
    scanf("%f",&C);
    float A_Mul=2*A;
    float p=0;
    p=pow(B,2);
    float brac=p-4*A*C;
    if(brac<=0)
    brac=-(brac);          //e.g iota(i) sqrt(-1)=i
    float seqrt=sqrt(brac);
    float b=-(B/A_Mul);
    float formula=seqrt/A_Mul;
    printf("\n\n%f - %fi",b,formula);
    printf("\n%f + %fi",b,formula);
}
