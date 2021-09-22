#include <stdio.h>

void leap_year(int year);

int main (void)
{
int year=0;

printf("\n");

printf("Give year: ");
scanf("%d",&year);

leap_year(year);
}

void leap_year(int year)
{
	if(((year %4 == 0)&&(year %100 != 0))||(year %400 == 0))
	{
	printf("Year is a leap year\n\n");
	}
	else
	{
	printf("Year is not a leap year\n\n");
	}

}
