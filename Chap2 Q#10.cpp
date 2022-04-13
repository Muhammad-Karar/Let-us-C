/*Question No 10:
Given three points   (x1, y1),  (x2, y2) and  (x3, y3), write a 
program to check if all the three points fall on one straight line.*/

#include<stdio.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,m,n;
	printf("\nEnter the value of (X1,Y1):\n");
	scanf("%f%f",&x1,&y1);
	
	printf("\nEnter the value of (X2,Y2):\n");
	scanf("%f%f",&x2,&y2);
	
	printf("\nEnter the value of (X3,Y3):\n");
	scanf("%f%f",&x3,&y3);
	
	m=(y2-y1)/(x2-x1);
	n=(y3-y2)/(x3-x2);
	
	if(m==n)
	printf("\n\nAll the Three Points are Fall on Straight Line: ");
	else
	printf("\n\nAll the Three Points are not Fall on Straight Line: ");
}
