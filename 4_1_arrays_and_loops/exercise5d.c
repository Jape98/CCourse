#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 15
#define MIN_RAND 1
#define MAX_RAND 99

int main(void)
{
srand(time(NULL));

int i=0,o=0,e=0;
int array[ARRAY_SIZE]={0}, odd[15]={0},even[15]={0};


printf("\n");

for(i=0; i<ARRAY_SIZE; i++){
	array[i]= rand()%MAX_RAND+MIN_RAND;
}

for(i=0; i<ARRAY_SIZE; i++)
{
	if(array[i]%2==0){
	even[e]=array[i];
	e++;
}
	else{
	odd[o]=array[i];
	o++;
}
}

//All numbers

printf("All numbers are:\n");

for(i=0; i<ARRAY_SIZE; i++)
{
	printf("%3d",array[i]);
}

printf("\n");

//Odd numbers

printf("Odd numbers are:\n");

for(i=0; i<ARRAY_SIZE; i++)
{
	if(odd[i]>0){
	printf("%3d",odd[i]);
}
}

printf("\n");

//Even numbers

printf("Even numbers are:\n");

for(i=0; i<ARRAY_SIZE; i++)
{
	if(even[i]>0)
	printf("%3d",even[i]);
}

printf("\n\n");
return 0;
}
