#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAND_MIN -50
#define RAND_RANGE 100
#define ARR_SIZE 30

void sort_array(int array[]);

int main(void)
{
printf("\n");

/*VARIABLES-------------------------------------*/
	int array[ARR_SIZE]={0};
 	int i=0;


	srand (time(NULL));

/*FILL ARRAY WITH RND NUMBERS-------------------*/
	while(i<ARR_SIZE)
		{
			array[i]= rand()%RAND_RANGE+RAND_MIN;
			i++;
		}
/*PRINT ORIGINAL ARRAY--------------------------*/

	printf("Original array is: ");

	for(i=0; i<ARR_SIZE; i++)
    {
		if(i<ARR_SIZE-1)
		{
			 printf("%d,",array[i]);
		}
		else
		{
			printf("%d",array[i]);
		}

    }
	printf("\n");

/*CALL SORT_ARRAY()-------------------------*/

	sort_array(array);

/*PRINT SORTED ARRAY------------------------*/

	printf("Sorted array is: ");
	for(i=0; i<ARR_SIZE; i++)
	{
		if(i<ARR_SIZE-1)
		{
			printf("%d,",array[i]);
		}
		else
		{
			printf("%d",array[i]);
		}
	}

	printf("\n\n");
}

/*END OF MAIN--------BEGINNING OF SORT_ARRAY*/

void sort_array(int array[])
{
	int i=0,j=0,temp=0;

	for(i=0; i<ARR_SIZE; i++)
	{
		for(j=i+1; j<ARR_SIZE; j++)
		{
			if(array[i]>array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}


}
