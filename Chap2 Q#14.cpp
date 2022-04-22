/*Chapter No 2:
Question No 14:
Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for
various characters. */

#include<stdio.h>
int main()
{
	char character;
	printf("\nEnter any Character: ");
	scanf(" %c",&character);
	
	if(character>='A' && character<='Z')
		{
			printf("\nThe Character you Entered is Alphabet and Upper case Letter: ");
		}
	else if(character>='a' && character<='z')
		{
			printf("\nThe Character you Entered is Alphabet and Lower case Letter: ");
		}
	else
		{
			printf("\nThe Character you Entered is Special Symbol: ");
		}
			
}


