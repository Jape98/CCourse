#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define MIN_RAND -40
#define MAX_RAND 81

int main(void)
{

int i=0,array[ARRAY_SIZE]={0},num;

srand(time(NULL));

printf("\n");

for (i=0;i<ARRAY_SIZE;i++){



	array[i] =rand()%MAX_RAND MIN_RAND;

}

printf("Array of size %d filled with random numbers (between -40 ... 40) is:\n",ARRAY_SIZE);

for (i=0; i<ARRAY_SIZE; i++){

if(i<ARRAY_SIZE-1){

	printf("%3d,", array[i]);
}
else{

	printf("%3d\n", array[i]);
}
}

printf("\n");
return 0;
}
