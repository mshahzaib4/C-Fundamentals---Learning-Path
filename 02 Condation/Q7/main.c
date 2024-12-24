#include <stdio.h>
#include <stdlib.h>

int main()
{   int items,se,profit=0;
    printf("Enter The cost Prize of Items : ");
    scanf("%d",&items);
    printf("Enter The selling Prize of Items : ");
    scanf("%d",&se);

if(items>=se)
{   profit=items-se;
    printf("\n\nCongrats You are in profit.\nAnd You Have \" %d \" PKR profit in Selling,s items\n\n",profit);
}

else
{   profit=items-se;
    profit= -(profit);
    printf("\n\nYou are in Lost\nYou Have \" %d PKR \" lost in Selling,s items\n\n",profit);
}
}
