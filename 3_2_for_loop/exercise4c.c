#include <stdio.h>

int main(void){

int array[10];
int i=10,i2,sum=0;
float average=0;

printf("Enter 10 numbers\n");

for (i=0; i<10; i++){

int i2=i+1;

printf("%2d.  ",i2);
scanf("%d", &array[i]);
}

printf("The mean value of numbers [");

for (i=0; i<10; i++){

if(i<9){
printf("%d,", array[i]);
}
else{
printf("%d", array[i]);
}
sum = sum+array[i];
}

average =(float)sum/i;
printf("] is %.2f\n ",average);

return 0;
}
