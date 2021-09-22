#include <stdio.h>
int main(void)
 {
float h=0, w=0, a, p;
printf("Enter Height: ");
scanf("%f", &h);

printf("Enter Width: ");
scanf("%f",&w);

printf("A rectangle, which height is %f cm and width is %f cm \n", h, w );
a = h*w;
p =(h*2)+(w*2);
printf("the perimeter is equal to %f cm \n", p );
printf("the area is equal to %f square cm \n", a );
 }
