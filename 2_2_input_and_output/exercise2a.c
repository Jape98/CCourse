#include <stdio.h>

int main(void){

char name[10], gender[1], adress[50], phone[15], age[2], balance[10], shoesize[2];

printf("Name:");
    scanf("%s", &name);

printf("Gender (M/F):");
    scanf("%s", &gender);

printf("Adress: ");
    scanf("%s", &adress);

printf("Phone: ");
	scanf("%s", &phone);

printf("Age: ");
    scanf("%s", &age);

printf("Balance: ");
    scanf("%s", &balance);

printf("Shoe size: ");
    scanf("%s", &shoesize);

printf("Name: %s \n", name);
printf("Gender: %s \n", gender);
printf("Adress: %s \n", adress);
printf("Phone: %s \n", phone);
printf("Age: %s \n", age);
printf("Balance: %s \n", balance);
printf("Shoe Size: %s\n", shoesize);
return 0;
}
