//-->Question_program3;
/*4. Using only the techniques you learned, Write a program that calculates the
square and cube of a number from 0-9. Use tabs to print the following table
of values.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n\n\n::::::::::PROGRAM3::::::::::\n\n");

    int zero=0,one=1,two=2,three=3,four=4,five=5,six=6,seven=7,eight=8,nine=9,ten=10;
    printf("number      Square      cube \n");
    printf("%d           %d           %d\n",zero,zero*zero,zero*zero*zero);
    printf("%d           %d           %d\n",one,one*one,one*one*one);
    printf("%d           %d           %d\n",two,two*two,two*two*two);
    printf("%d           %d           %d\n",three,three*three,three*three*three);
    printf("%d           %d          %d\n",four,four*four,four*four*four);
    printf("%d           %d          %d\n",five,five*five,five*five*five);
    printf("%d           %d          %d\n",six,six*six,six*six*six);
    printf("%d           %d          %d\n",seven,seven*seven,seven*seven*seven);
    printf("%d           %d          %d\n",eight,eight*eight,eight*eight*eight);
    printf("%d           %d          %d\n",nine,nine*nine,nine*nine*nine);
    printf("%d          %d         %d\n",ten,ten*ten,ten*ten*ten);
}
