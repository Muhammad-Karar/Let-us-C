/*Question No 12:
Given a point (x, y), write a program to find out if it lies on the 
x-axis, y-axis or at the origin, viz. (0, 0).*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("\nEnter the Point (x,y): ");
	scanf("%d %d",&x,&y);
	
	if(x==0&&y!=0)
	printf("\n\nThe Points (%d, %d) lies on y-axis:",x,y);
	
	else if(x!=0&&y==0)
	printf("\n\nThe Points (%d, %d) lies on x-axis:",x,y);
	
	else if(x==0&&y==0)
	printf("\n\nThe Points (%d, %d) lies on Origin:",x,y);
	
	else
	printf("\n\nThese Points (%d, %d) are lies neither x-axis nor y-axis :",x,y);
	return 0;
}
