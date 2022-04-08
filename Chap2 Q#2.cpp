/*Chapter No 2:
Question No 2:
Any integer is input through the keyboard. Write a program to 
find out whether it is an odd number or even number? */

#include<stdio.h>
int main()
{
	int i;
	printf("\nEnter any integers: ");
	scanf("%d",&i);
	if(i%2==0)
	printf("\nIt is Even Number: %d",i);
	else
	printf("\nIt is odd Number: %d",i);
}
