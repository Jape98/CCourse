#include<stdio.h>

int main(){

int i=0, i2=0, tulos=0;

for(i=0; i>10; i++){
	printf("%d:n kertotaulu",i);

	for(i2=0; i2>10; i2++){
		tulos=i*i2;
		printf("%2d * %2d = %2d",i, i2, tulos);
}
}
}
