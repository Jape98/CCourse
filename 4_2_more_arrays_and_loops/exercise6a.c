#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20
#define MIN_RAND 1
#define MAX_RAND 100

int main(void)
{

int i=0, biggest=0, smallest=100, axel=0, star=0, space=0, i2=0, i3=0;
int array[ARRAY_SIZE]={0};
srand(time(NULL));

printf("\n");


for(i=0; i<ARRAY_SIZE; i++){
	array[i]=rand()%MAX_RAND+MIN_RAND;
}


for(i=0; i<ARRAY_SIZE; i++){

if(array[i]>biggest){
	biggest=array[i];
}
if(array[i]<smallest){
	smallest=array[i];
}
}

printf("Content of array is [");
for(i=0; i<ARRAY_SIZE; i++){

if(i<ARRAY_SIZE-1){
	printf("%d,",array[i]);
}else{

	printf("%d",array[i]);
}
}

printf("]\n");
printf("  and the biggest number was %d and smallest was %d\n",biggest,smallest);
printf("\n   ");

/* VALUE AXEL */
for(i=0; i<biggest; i++){

	printf("%d",axel);
	axel++;

if(axel>9){
	axel=0;
}
}
printf("\n");

/* CHART */
for(i=0; i<ARRAY_SIZE; i++){

	printf("%2d: ",i+1);

star=array[i];

for(i2=0; i2<star; i2++){
	printf("*");
}
space=100-array[i];
for(i3=0; i3<space; i3++){
	printf(" ");
}
printf("(%3d)\n",array[i]);
}


printf("\n");
return 0;
}
