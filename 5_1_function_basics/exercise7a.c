#include <stdio.h>

void hello(void)
{
printf("Hi, I am a function\n");
}

int main(void)
{

	printf("\n");
	printf("This text is printed in main\n");
	hello();
	printf("And back again in main\n");
	printf("\n");

	return 0;
}
