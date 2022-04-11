/*Question No 5:
A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.*/

#include<stdio.h>
int main()
{
	int num,d1,d2,d3,d4,d5,rev;
	printf("\nEnter Five Digit Number: ");
	scanf("%d",&num);
	
	d1=num%10;
	printf("\n\tDigit 1 = %d",d1);
	num=num/10;
	
	d2=num%10;
	printf("\n\tDigit 2 = %d",d2);
	num=num/10;
	
	d3=num%10;
	printf("\n\tDigit 3 = %d",d3);
	num=num/10;
	
	d4=num%10;
	printf("\n\tDigit 4 = %d",d4);
	num=num/10;
	
	d5=num%10;
	printf("\n\tDigit 5 = %d",d5);
	
	// Reversed Of These Five Digit is:
	rev=d5*10000+d4*1000+d3*100+d2*10+d1*1;
	printf("\nThe Reveresd of number is (%d %d %d %d %d)",d1,d2,d3,d4,d5);
	
	//Now find the orignal and Reversed is same or not:
	
	if(num==rev)
	printf("\nThe Both Number are same: ");
	else 
	printf("\n\nThe Both Number are not same: ");
}
