#include <stdio.h>
int main(void)
{
char letter;
printf("Give me a letter: ");
scanf("%c",&letter);

if (letter>=65 && letter<=90)
{
printf("Letter %c is a Capital letter\n",letter);
}
else
{
printf("Letter %c is not Capital letter\n",letter);
}
return 0;
}

