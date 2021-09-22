#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int suffle_number(void);

int main (void)
{
srand(time(NULL));
int a=0
;
printf("\n");

a=suffle_number();
printf("%d",a);

printf("\n\n");

return 0;
}

int suffle_number(void)
{
	int a=0;
	a=rand() %40 - 20;

	return a;
}
