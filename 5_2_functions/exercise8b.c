#include <stdio.h>

void days_in_month(int month);

int main(void)
{
int month=0;

printf("\n");

printf("Give month (1-12): ");
scanf("%d",&month);

days_in_month(month);
printf("\n\n");
}

void days_in_month(int month)
{
	int i=0;
	int days[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	i=month;
	switch(month)
	{
	case 1:
		printf("There are %d days in Janyary",days[i]);
		break;
	case 2:
		printf("There are %d days in February",days[i]);
		break;
	case 3:
		printf("There are %d days in March",days[i]);
		break;
	case 4:
		printf("There are %d days in April",days[i]);
		break;
	case 5:
		printf("There are %d days in May",days[i]);
		break;
	case 6:
		printf("There are %d days in June",days[i]);
		break;
	case 7:
		printf("There are %d days in July",days[i]);
		break;
	case 8:
		printf("There are %d days in August",days[i]);
		break;
	case 9:
		printf("There are %d days in September",days[i]);
		break;
	case 10:
		printf("There are %d days in October",days[i]);
		break;
	case 11:
		printf("There are %d days in November",days[i]);
		break;
	case 12:
		printf("There are %d days in December",days[i]);
		break;
	}
}
