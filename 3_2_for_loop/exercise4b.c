#include <stdio.h>

int main(void){

int array[10]={15, 73, 43, -28, 65, 186, -37, 28, 13, 88};
int i;
printf("Content of array is\n");

for (i=0; i<10; i++){
printf("%2d %3d \n",i,array[i]);

}
return 0;
}
