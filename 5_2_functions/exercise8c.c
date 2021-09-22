#include <stdio.h>

#define MIN 20
#define MAX 70

int ask_integer_number(int min, int max);

int main(void)
{
int min=MIN, max=MAX, num=0;

	printf("\n");

	num = ask_integer_number(min, max);

	printf("User given number was %d",num);


printf("\n\n");
}

int ask_integer_number(int min, int max)
{
	int num=0;

	printf("Give number between %d and %d: ",min,max);
	scanf("%d", &num);

		while(num<min || num>max)
		{
		printf("Number was not in range (%d-%d): ",min,max);
		scanf("%d", &num);
		}

}
