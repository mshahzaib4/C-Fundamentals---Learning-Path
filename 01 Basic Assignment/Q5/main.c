/*5. Take a number from user and print it table
Hint 2 x 1 = 2
2 x 2 = 4
.
.
2 x 10 = 20*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("\n\n\n::::::::::PROGRAM5::::::::::\n\n");
    printf("@@@@@@@@@@ Table @@@@@@@@@@\n\n");
    printf("Enter Number :");
    int table;
    scanf("%d",&table);
    printf("%d * 1 = %d\n",table,table*1);
    printf("%d * 2 = %d\n",table,table*2);
    printf("%d * 3 = %d\n",table,table*3);
    printf("%d * 4 = %d\n",table,table*4);
    printf("%d * 5 = %d\n",table,table*5);
    printf("%d * 6 = %d\n",table,table*6);
    printf("%d * 7 = %d\n",table,table*7);
    printf("%d * 8 = %d\n",table,table*8);
    printf("%d * 9 = %d\n",table,table*9);
    printf("%d * 10 = %d\n",table,table*10);
}
