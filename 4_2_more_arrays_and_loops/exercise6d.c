#include <stdio.h>

#define ARRAY_SIZE 15


int main(void)
{

    int i=0;
    char source[ARRAY_SIZE]="Hello world !";
	char destination[ARRAY_SIZE];

    printf("\n");

	while (source[i] != '\0')
	{
        destination[i] = source[i];
		i++;
    }

	printf("Length of the string one is: %d\n",i);
	printf("The copied string is ");

	i=0;
	while(destination[i] !='\0')
	{
		printf("%c", destination[i]);
		i++;
	}

	//printf("%s",destination);

    printf("\n");
    printf("\n");
    return 0;
}
