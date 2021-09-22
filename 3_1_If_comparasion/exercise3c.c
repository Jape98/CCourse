#include <stdio.h>
int main(void)
{
char letter;
printf("Give me a letter, number or character: \n");
scanf("%c",&letter);
if ((letter>='!' && letter<='/') || (letter>=':' && letter<='@') || (letter>='[' && letter<='`') || (letter>='{' && letter<='~'))
{
printf("Given letter %c is a special character\n",letter);
}
if (letter>='0' && letter<='9')
{
printf("Given letter %c is a number\n",letter);
}
if (letter>='A' && letter<='Z')
{
printf("Given letter %c is a Capital letter\n",letter);
}
if (letter>='a' && letter<='z')
{
printf("Given letter %c is a letter\n",letter);
}
return 0;
}
