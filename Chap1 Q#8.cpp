/* Question # 8: 
If a five-digit number is input through the keyboard, write a 
program to reverse the number. */

#include<stdio.h>
int main()
{
	int x,a,b,c,d,e;			//This program is 5 digit Reversed number.
	printf("\nEnter Five Digit Numbers: ");
	scanf("%d",&x);
	
	a=x%10;
	printf("\nIst Digit is = %d",a);
	x=x/10;
	
	b=x%10;
	printf("\n2nd Digit is = %d",b);
	x=x/10;
	
	c=x%10;
	printf("\n3rd Digit is = %d",c);
	x=x/10;
	
	d=x%10;
	printf("\n4th Digit is = %d",d);
	x=x/10;
	
	e=x%10;
	printf("\n5th Digit is = %d",e);
	
	printf("\n\nSo The Reverse of a number is %d %d %d %d %d",a,b,c,d,e);
}
