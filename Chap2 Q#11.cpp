/*Question No 11:
Given the coordinates (x, y) of a center of a circle and it’s radius, 
write a program which will determine whether a point lies inside 
the circle, on the circle or outside the circle. 
(Hint: Use sqrt( ) and pow( ) functions) */

#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,center_x,center_y,radius,dis;
	printf("\nEnter The Value of (x,y): ");
	scanf("%f %f",&x,&y);
	
	printf("\nEnter The Coordinate (x,y) of a center: ");
	scanf("%f %f",&center_x,&center_y);
	
	printf("\nEnter The Radius of a Circle: ");
	scanf("%f",&radius);
	
	dis=sqrt(pow(x-center_x,2)+pow(y-center_y,2));
	
	printf("\n\nThe Distance b/w Center and Point is %.1f",dis);
	
	if(dis>radius)
	printf("\n\nThe Point Lies Outside the Circle: ");
	else if(dis<radius)
	printf("\n\nThe Point Lies inside the Circle: ");
	else if(dis==radius)
	printf("\n\nThe Point Lies On the Circle: ");
	else
	printf("\n\n Your entry is wrong: ");
}
