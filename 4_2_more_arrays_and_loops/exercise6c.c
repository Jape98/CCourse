#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 15

int main(void)
{

    int i=0, length=0;
    char source[ARRAY_SIZE]="Hello world !";

		length= strlen(source);

	char destination[length];

		strcpy(destination,source);

    printf("\n");

	printf("Length of the string one is: %d\n",length);
	printf("The copied string is ");

	for(i=0; i<length; i++)
	{
		printf("%c",destination[i]);
	}

    printf("\n");
    printf("\n");
    return 0;
}
