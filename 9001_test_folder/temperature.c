#include <stdio.h>

int temp=0;
int main(void){

printf("Give temperature:");
scanf("%d",&temp);

if(temp < 0){
     printf("Freezing weather");
}
if(temp>=0 && temp <=10){
	printf("Very Cold weather");
}
if(temp>=11 && temp <=20){
	printf("Cold weather");
}
if(temp>=21 && temp <=30){
	printf("Normal in Temp");
}
if(temp>=31 && temp <=40){
	printf("Its Hot");
}
if(temp>40)
{
	printf("Its Very Hot");
}
}
