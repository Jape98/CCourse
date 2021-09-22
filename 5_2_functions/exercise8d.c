#include <stdio.h>

#define VOLT_MIN 20
#define VOLT_MAX 100

#define RES_MIN 1
#define RES_MAX 65

int ask_integer_number(int min, int max);

int main(void)
{
printf("\n");

/*-------------------Voltage-----------------------*/
	int voltMin=VOLT_MIN, voltMax=VOLT_MAX, volt=0;

	printf("Give voltage between %d and %d: ",voltMin,voltMax);

	volt = ask_integer_number(voltMin,voltMax);

/*--------------------Resistance-------------------*/
	int resMin=RES_MIN, resMax=RES_MAX, res=0;

	printf("Give resistance between %d and %d: ",resMin,resMax);

	res = ask_integer_number(resMin,resMax);

/*----------------------Math-----------------------*/
	float current=0;
	int power =0;

	current	=(float)volt/res;
	power	=volt*volt/res;

/*----------------------Print----------------------*/

printf("Power consumpiton in %d ohm resistance with %d V voltage is %d W and current is %.1f A",res,volt,power,current);

/*-------------------------------------------------*/
printf("\n\n");
}

int ask_integer_number(int min, int max)
{
	int num=0;

	scanf("%d", &num);

		while(num<min || num>max)
		{
		printf("\nNumber was not in range (%d-%d): \n",min,max);
		scanf("%d", &num);
		}
	return num;
}
