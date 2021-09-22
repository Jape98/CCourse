#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 50
#define MIN_RAND 1
#define MAX_RAND 38
#define GENERATED_NUMBERS 7

int main(void)
{

    int i=0, i2=0, place=0;
    int array[ARRAY_SIZE]= {0};

    srand(time(NULL));


    printf("\n");


    while(i<GENERATED_NUMBERS) {
	    place=rand()%MAX_RAND+MIN_RAND;

        while(array[place]==1) {
            place=rand()%MAX_RAND+MIN_RAND;
        }
        array[place]=1;
		i++;
    }


    printf("Content of array is [");

    i=0;

    while(i<ARRAY_SIZE) {

        if(array[i]==1){

			switch(i2){

				case 6:
					printf("%d",i);
					break;
				default:
					printf("%d, ",i);
					break;
			}

			i2++;
        }

	i++;
    }

    printf("]\n");


    printf("\n");
    return 0;
}
