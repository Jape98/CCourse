#include <stdio.h>

void average(int valueOne, int value2);

int main(void)
{
int valueOne=0, value2=0;
printf("\n");

printf("Give Number 1: ");
scanf("%d", &valueOne);
printf("Give Numer 2: ");
scanf("%d", &value2);
printf("\n");

average(valueOne,value2);

printf("\n");
return 0;
}

void average(int valueOne,int value2)
{

	printf("User entered numbers %d and %d.\n",valueOne, value2);

	if(valueOne>value2){
	printf("Bigger number is %d", valueOne);
	}
	else{
	printf("Bigger number is %d", value2);
	}

	float average=(float)(valueOne+value2)/2;

	printf(" and the average is %.1f\n",average);
return 0;
}
