/*Write a program to print out all Armstrong numbers between 
1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an 
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 ) */

#include<stdio.h>
int main()
{
	int rem,sum,temp=0;

	for (int num=1;num<=500;num++)
	{
		sum=0;
		for(int temp=num;temp!=0;)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;	
		}
	
		if(num==sum)
		{
			printf("\n %d is a Armstrong Number: ",num);
		}
		
	}
	
	
	
}

