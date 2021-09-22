#include <stdio.h>

int main(void)
{

int biggest=0,i=0;
int arr[5]={0};
	
	printf("Give number 1: ");
	scanf("%d",&arr[0]);
	printf("Give number 2: ");
	scanf("%d",&arr[1]);
	printf("Give number 3: ");
	scanf("%d",&arr[2]);
	
    
	biggest=arr[0];
	
	for (i=0; i<3; i++)
	{
		if (arr[i]>biggest)
		{
			biggest=arr[i];
		}
		else
		{
			continue;	
		}
	}
	
	printf("Largest number is %d",biggest);
}