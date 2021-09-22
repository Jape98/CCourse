#include <stdio.h>

int main(void){

int i,number,result;

printf("Give me number: ");
scanf("%d", &number);

for (i=0; i<=10; i++){

result = i*number;
printf("%d * %d = %d \n", i ,number, result);

}
return 0;
}
