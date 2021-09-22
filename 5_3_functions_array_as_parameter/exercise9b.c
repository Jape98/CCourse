
#include<stdio.h>

#define LENGTH 100

int diff(int array[]);

int main(void)
{

	int array[LENGTH]={0};
	int i=0,result=0,temp=1;

	printf("Give an array:\n");

		while(temp!=0)
		{
			scanf("%d",&temp);
			array[i]=temp;
			i++;
		}
	array[i]=0;

	result=diff(array);

	printf("The difference of elements in array is: %d \n",result);
}

int diff(int array[])
{
	int i=0,result=0,min=array[0],max=array[0];

		while(array[i]!=0)
		{
			if(array[i]>max)
			{
				max=array[i];
			}
			if(array[i]<min)
			{
				min=array[i];
			}
		i++;
		}

	result=max-min;

return result;
}

