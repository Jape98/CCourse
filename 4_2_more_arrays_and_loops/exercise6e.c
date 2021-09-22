#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 109
#define MIN_RAND 0
#define MAX_RAND 109
#define GENERATED_NUMBERS 30

int main(void)
{

    int i=0, place=0;
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

        if(array[i]!=0) {
            printf("%4.1f,",(float)(i-10)/10);
        }
	i++;
    }

    printf("]\n");


    printf("\n");
    return 0;
}

