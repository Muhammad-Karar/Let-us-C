/* Question # 13:
If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402.*/

#include<stdio.h>
int main()
{
	int num,x1,x2,x3,x4,x5;
	
	printf("\nEnter Any Five Digit Numbers: ");
	scanf("%d",&num);
	
	x1=(num)%10;
	printf("\n\tX1 = %d",x1);
	x1=(num+1)%10;
	num=num/10;
	
	x2=(num)%10;
	printf("\n\tX2 = %d",x2);
	x2=(num+1)%10;
	num=num/10;
	
	x3=(num)%10;
	printf("\n\tX3 = %d",x3);
	x3=(num+1)%10;
	num=num/10;
	
	x4=(num)%10;
	printf("\n\tX4 = %d",x4);
	x4=(num+1)%10;
	num=num/10;
	
	x5=(num)%10;
	printf("\n\tX5 = %d",x5);
	x5=(num+1)%10;
	num=num/10;
	
	printf("\n\nSo The Numbers By Adding one is = %d %d %d %d %d ",x5,x4,x3,x2,x1);
}
