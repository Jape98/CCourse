#include <stdio.h>

int main(void)
  {

   char forename[30], familyname[30];

   printf("Give your forename and family name: ");
   scanf(" %s %s", forename,familyname);

   printf("Your name is: %s %s\n",forename, familyname);
}
