#include <stdio.h>

void coko_doo(int amount);

int main (void)
{
int amount;
printf("\n");

printf("Give a number: ");
scanf("%d", &amount);
printf("\n");
coko_doo(amount);

printf("\n");
}

void coko_doo(int amount)
{
	int i=0;

	for(i=0; i<amount; i++)
	{
	printf("cock-a-doodle-doo\n");
	}
}
