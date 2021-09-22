#include <stdio.h>

int one=0,two=0,three=0;

int main(void){

printf("give three angle separated by space");
scanf("%d %d %d",&one, &two, &three);

int result= one+two+three;

if(result==180){
	printf("Angles make a triangle");
}
else{
	printf("Angles doesn't makes a triangle");
}
}
