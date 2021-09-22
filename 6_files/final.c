#include<stdio.h>


void display_menu(void);
char ask_command(void);
int count_vowels(char s[]);
int count_consonants(char s[]);
void to_upper(char s[]);
void to_lower(char s[]);
void print_string(char s[]);
void read_string(char s[]);
void read_file(char s[]);
void write_file(char s[]);


int main(void)
{
	char string[300]="Hello World!";
	char command;
	int exit=0;

		display_menu();

	while(exit == 0)
	{

		command = ask_command();

		switch(command)
		{
			case'A':
				count_vowels(string);
				break;

			case'B':
				count_consonants(string);
				break;

			case'C':
				to_upper(string);
				printf("%s", string);
				break;

			case'D':
				to_lower(string);
				printf("%s", string);
				break;

			case'E':
				print_string(string);
				break;

			case'F':
				read_string(string);
				break;

			case'G':
				read_file(string);
				break;

			case'H':
				write_file(string);
				break;

			case'M':
				display_menu();
				break;

			case'X':
				exit=1;
				break;

			default:
				printf("Command not found");
				break;

		}
	printf("\n");
	}
}

/*------------------------------DISPLAY MENU----------------------------------*/

void display_menu(void)
{
		printf("\n");
	printf("A) Count the number of vowels in the string\n");
	printf("B) Count the number of consonants in the string\n");
	printf("C) Convert the string to uppercase\n");
	printf("D) Convert the string to lowercase\n");
	printf("E) Display the current string\n");
	printf("F) Enter another string\n");
	printf("G) Read string from file\n");
	printf("H) Write string to file\n");
		printf("\n");
	printf("M) Displays this menu\n");
	printf("X) Exit the program\n");
		printf("\n");
}

/*--------------------------------ASK COMMAND----------------------------------*/
/*

*/
char ask_command(void)
{
	char command[10];

	/**/
	printf("Enter command: ");
	fgets(command,10,stdin);
	printf("\n");


	/*If letter is lowercase convert to uppercase*/
	if(command[0]>='a' && command[0]<='z')
	{
		to_upper(command);
	}

	/*If letter already is uppercase,  return command to main*/
	if(command[0]>='A' && command[0]<='Z')
	{
		return command[0];
	}

}
/*---------------------------------VOWEL COUNTER------------------------------*/
int count_vowels(char s[])
{
	int i=0,vowel=0;

	while(s[i]!='\0')
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U')
		{
			vowel++;
		}


		i++;
	}

	printf("Vowels in string: %d",vowel);
	printf("\n");
}

/*-------------------------------CONSONANT COUNTER----------------------------*/
int count_consonants(char s[])
{
	int i=0,consonant=0;

	while(s[i]!='\0')
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U')
		{
			i++;
			continue;
		}
		else
		{
			consonant++;
		}

		i++;
	}

	printf("Consonants in string: %d",consonant);
	printf("\n");
}

/*-------------------------------Convert to uppercase---------------------------*/
void to_upper(char s[])
{
	int i=0;

	while(s[i]!='\0')
	{

		if( s[i]>='a' && s[i]<='z' )
		{
			s[i]=s[i]-32;
		}

		i++;
	}

}
/*-----------------------------Convert to lowercase-----------------------------*/
void to_lower(char s[])
{
	int i=0;

	while(s[i]!='\0')
	{

		if( s[i]>='A' && s[i]<='Z' )
		{
			s[i]=s[i]+32;
		}

		i++;
	}

}

/*------------------------------------PRINT STRING------------------------------*/
void print_string(char s[])
{
	printf("%s", s);
}


/*------------------------------------READ STRING------------------------------*/

void read_string(char s[])
{
	printf("Give new string: ");
	scanf ("%[^\n]s", s);

}

/*------------------------------READ STRING FROM FILE---------------------------*/
void read_file(char s[])
{
	
	FILE *fp;

	fp = fopen("dummy.txt", "r");
	
	if(fp==0)
	{
		printf("File does not exist\n");
	}
	
	fscanf(fp, "%s", s);
	printf("%s", s);
  
	fclose(fp);
	
}

/*------------------------------WRITE STRING TO FILE---------------------------*/
void write_file(char s[])
{
	
	FILE *fp;

	fp = fopen("dummy.txt", "w");
	
	if(fp==0)
	{
		printf("File does not exist\n");
	}
	
	fprintf(fp, "%s", s);
	
  
	fclose(fp);
	
	
}

