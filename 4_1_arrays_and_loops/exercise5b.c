#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20
#define MIN_RAND 10
#define MAX_RAND 30

int main(void){

int i=0,array[ARRAY_SIZE]={0},mirrored[ARRAY_SIZE]={0},num;

srand(time(NULL));

printf("\n");

for (i=0;i<ARRAY_SIZE;i++){
	array[i] = rand()%MAX_RAND + MIN_RAND;
}

printf("Array of random numbers:\t ");
for (i=0;i<ARRAY_SIZE;i++){
	printf("%3d",array [i]);
}
printf("\n");

printf("Same array is reverse order is: ");
for (i=ARRAY_SIZE-1; i>=0; i--){

	printf("%3d",array[i]);
}

printf("\n");
return 0;
}
