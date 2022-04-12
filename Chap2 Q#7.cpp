/*Question No 7:
Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the 
keyboard. A triangle is valid if the sum of all the three angles 
is equal to 180 degrees.*/

#include<stdio.h>
int main()
{
	int angle_1,angle_2,angle_3,sum;
	printf("\nEnter Three Angles of a Triangles : ");
	scanf("%d %d %d",&angle_1,&angle_2,&angle_3);
	
	sum=angle_1+angle_2+angle_3;
	printf("\nThe Sum of Angles is = %d\n",sum);
	printf("So");
	
	if(sum==180)
	printf("\nThe Triangle is valid: ");
	
	else
	printf("\nThe Triangle is Not valid: ");
	
}
