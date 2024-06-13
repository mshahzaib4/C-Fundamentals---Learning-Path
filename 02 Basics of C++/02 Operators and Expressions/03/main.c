/*19. If the marks obtained by a student in five different subjects are input through
the keyboard, find out the aggregate marks and percentage marks obtained
by the student. Assume that the maximum marks that can be obtained by a
student in each subject is 100.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{    printf("------------------------Assignment2---------------------------\n");
    printf("19. If the marks obtained by a student in five different subjects are input through ");
    printf("\nThe keyboard, find out the aggregate marks and percentage marks obtained ");
    printf("by the student. \nAssume that the maximum marks that can be obtained by a student in each subject is 100.\n");
    printf("--------------------------------------------------------------\n\n");
 float math,computer,prog,Discreat,Enlish;
    printf("Enter Number obtained in Computer :");
    scanf("%f",&computer);
    printf("Enter Number obtained in Math :");
    scanf("%f",&math);
    printf("Enter Number obtained in programming :");
    scanf("%f",&prog);
    printf("Enter Number obtained in Discreat :");
    scanf("%f",&Discreat);
    printf("Enter Number obtained in English :");
    scanf("%f",&Enlish);
   float ob_mraks=computer+math+prog+Discreat+Enlish;
   float pr=ob_mraks/500*100;
    float Ag=ob_mraks/5;

    printf("Aggregate of the Student is :%f\n",Ag);
    printf("percentage of the Student is :%f\n",pr);}
