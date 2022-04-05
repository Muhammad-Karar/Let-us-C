/* Question # 9: 
If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number. */

#include<stdio.h>
int main()
{
	int num,istdigit,lastdigit,x,y,z;
	printf("\nEnter Four digit Number: ");
	scanf("%d",&num);
	
	lastdigit=num%10;
	printf("\nThe Last Digit is = %d",lastdigit);
	num=num/10;
	
	x=num%10;
	printf("\nThe 3rd Digit is = %d",x);
	num=num/10;
	
	y=num%10;
	printf("\nThe 2nd Digit is = %d",y);
	num=num/10;
	
	istdigit=num%10;
	printf("\nThe Ist Digit is = %d",istdigit);
	
	z=istdigit+lastdigit;
	printf("\nThe sum of Ist and Last Digit is (%d + %d) = %d",istdigit,lastdigit,z);
	
}
