#include <stdio.h>
int main(void)
{
    int num1,num2,bnum=0;

    printf("Numer 1?\n");
    scanf("%d",&num1);
    printf("Number 2?\n");
    scanf("%d",&num2);

    if (num1>num2)
    {
	bnum=num1;
    }
    else
    {
	bnum=num2;
    }
    printf("User did input numbers %d and %d and the bigger number is %d\n",num1,num2,bnum);
return 0;
}
