/*Chap3 Question # 3
Two numbers are entered through the keyboard. Write a
program to find the value of one number raised to the power
of another. */
#include<stdio.h>
int main()
{
	int base,exp,x,y;

	printf("\n Enter Base number: ");
	scanf("%d",&base);
	printf("\n Enter Exponential value: ");
	scanf("%d",&exp);
	int temp=1;
	for(int x=1;x<=exp;x++)
	{
		temp = temp*base;
		
	}
	
	printf("\n %d is raised to the power of %d is %d",base,exp,temp);
	
}
