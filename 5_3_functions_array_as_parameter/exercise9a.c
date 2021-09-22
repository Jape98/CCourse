#include<stdio.h>

#define LENGTH 100

int count_char(char str[], char c);

int main(void)
{

	char str[LENGTH];
	char count;
	int value=0;

	printf("Give a string: ");
	scanf ("%[^\n]s", str);
	printf("Give character to be searched: ");
	scanf(" %c",&count);

	value = count_char(str, count);

	printf("In string there is %d of selected characters\n",value);
}

int count_char(char str[], char c)
{
	int amount=0;
	int i=0;

	while(str[i]!='\0')
	{
		if(str[i] == c){
			amount++;
		}

			i++;
	}

return amount;
}
