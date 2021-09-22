/***************************************************************************
 *   Copyright (C) $Year$ by $Author$   *
 *   $Email$   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*********************************************************************

 1.  NAME
     $Source$ 

 2.  DESCRIPTION

 3.  VERSIONS
       Original:
         $Date$ / $Author$

       Version history:

**********************************************************************/

/*-------------------------------------------------------------------*
*    HEADER FILES                                                    *
*--------------------------------------------------------------------*/
#include <stdio.h>

/*-------------------------------------------------------------------*
*    GLOBAL VARIABLES AND CONSTANTS                                  *
*--------------------------------------------------------------------*/

// no global variables

/*-------------------------------------------------------------------*
*    FUNCTION PROTOTYPES                                             *
*--------------------------------------------------------------------*/
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

/*********************************************************************
*    MAIN PROGRAM                                                      *
**********************************************************************/

int main(void)
{
	char string[300]="Hello World!";
	char command;
	
	int exit=0;
	
		display_menu();

	while(exit != 1)
	{

		command = ask_command();

		switch(command)
		{
			case'A':
				printf("Vowels in string: %d",count_vowels(string));
				break;

			case'B':
				printf("Consonants in string: %d", count_consonants(string));
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

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/


/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: display_menu
 DESCRIPTION: Prints command menu.
	Input:	void
	Output:	void
*********************************************************************/

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

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: ask_command
 DESCRIPTION: function that asks the command, converts letter to uppercase, and returns command to main program
	Input: string from main
	Output: returns the conten of first index of command[] in uppercase.
 REMARKS when using this function:
	-Does not work with nordic letters (ä, æ, ö, ø, å,)
---------------------------------------------------------------------*/


char ask_command(void)
{
	char command[10]; 	//string to store command

	/**/
	printf("Enter command: ");
	fgets(command,10,stdin);
	printf("\n");


	/*If letter is lowercase convert to uppercase and return command to main*/
	if(command[0]>='a' && command[0]<='z')
	{
		to_upper(command);
		return command[0];
	}

	/*If letter already is uppercase,  return command to main*/
	else if(command[0]>='A' && command[0]<='Z')
	{
		return command[0];
	}

}

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: count_vowels
 DESCRIPTION: Checks every index of string and adds +1 to counter when index contains vowel
	Input: string from main
	Output: amount of vowels
 REMARKS when using this function:
	-Does not work with nordic letters (ä, æ, ö, ø, å,)
---------------------------------------------------------------------*/
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

	return vowel;

}

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: count_consonants
 DESCRIPTION: Checks every index of string and adds +1 to counter when index contains consosant
	Input: string from main
	Output: amount of consonants
 REMARKS when using this function:
	-Does not work with nordic letters (ä, æ, ö, ø, å,)
---------------------------------------------------------------------*/
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

	return consonant;
}

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: to_upper
 DESCRIPTION: If content of current index is lowercase, convert to uppercase
	Input: string from main
	Output: void
  Used global variables:
 REMARKS when using this function:
 	-Does not work with nordic letters (ä, æ, ö, ø, å,)
---------------------------------------------------------------------*/
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

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: to lower
 DESCRIPTION: If content of current index is uppercase, convert to lowercase
	Input: string from main
	Output: void
 REMARKS when using this function:
 	-Does not work with nordic letters (ä, æ, ö, ø, å,)
---------------------------------------------------------------------*/
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

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: print_string
 DESCRIPTION: prints curretc string
	Input: string from main
---------------------------------------------------------------------*/
void print_string(char s[])
{
	printf("%s", s);
}


/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: read_string
 DESCRIPTION: overwrites current string
	Input: string from main
	Output: void
---------------------------------------------------------------------*/

void read_string(char s[])
{
	printf("Give new string: ");
	scanf ("%[^\n]s", s);

}

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: read_file
 DESCRIPTION: Opens file, scans text to string, closes file
	Input: string from main
	Output: void
---------------------------------------------------------------------*/
void read_file(char s[])
{
	
	FILE *fp;

	fp = fopen("dummy.txt", "r");	//open dummy.txt for reading
	
	if(fp==0)				//check if file exists
	{
		printf("File does not exist\n");
	}
	
	//fscanf(fp, "%s", s);	//scan file to string
	fgets (s, 300, fp);
  
	fclose(fp);				//close file
	
	
}

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: write_file
 DESCRIPTION: Opens file, writes text to string, closes file
	Input: string from main
	Output: void
---------------------------------------------------------------------*/
void write_file(char s[])
{
	
	FILE *fp;	//file pointer fp

	fp = fopen("dummy.txt", "w");	//open dummy.txt for writing
	
	if(fp==0)					//check if file exists
	{
		printf("File does not exist\n");
	}
	else
	{
		fclose(fp);				//close file
	}
	
}