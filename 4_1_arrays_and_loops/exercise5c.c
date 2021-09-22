#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 11
#define MIN_RAND 0	//alaraja
#define MAX_RAND 11	//kuinka monta numeroa alarajasta ylöspäin

int main(void)
{

int i=0,array[ARRAY_SIZE]={0},x=0;

srand(time(NULL));

printf("\n");

for(i=0; i<1000; i++){
x=rand()%MAX_RAND+MIN_RAND;
array[x]=array[x]+1;
}

printf("Number occurrence:\n");

for(i=0; i<ARRAY_SIZE; i++){
printf("number %d occurred %d times \n",i,array[i]);
}

printf("\n");
return 0;
}
