/*Write a program to print all the ASCII values and their 
equivalent characters using a while loop. The ASCII values 
vary from 0 to 255.*/

#include<stdio.h>
int main()
{
	int value=0;
	
	while(value<=255)
	{
		char chr;
		printf("\nThe ASCII Value of  %c is %d\n",chr,value);
		value++;
		chr++;
	}
	
		
}
