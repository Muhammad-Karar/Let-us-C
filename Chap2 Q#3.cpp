/*Chapter No 2:
Question No 3:
Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. 
(Hint: Use the % (modulus) operator) */

#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter any Year: ");
	scanf("%d",&year);
	
	if(year%400==0)
	printf("\nThis is a Leap year: %d",year);
	
	else if(year%100==0)
	printf("\nThis is Not a Leap year: %d",year);
	
	else if(year%4==0)
	printf("\nThis is a Leap year: %d",year);
	
	else
	printf("\nThis is Not a Leap year: %d",year);	
}
