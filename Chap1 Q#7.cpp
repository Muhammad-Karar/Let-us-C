/* Question # 7: 
If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits.  
(Hint: Use the modulus operator ‘%’). */

#include<stdio.h>
int main()
{
	int x,a,b,c,d,e,sum;				// Sum of 5 digit Numbers.
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
	
	sum=a+b+c+d+e;
	printf("\nThe Sum of Five Digit Numbers is = %d",sum);
}
