/*Question No 9:
Given the length and breadth of a rectangle, write a program to 
find whether the area of the rectangle is greater than its 
perimeter. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter.*/

#include<stdio.h>
int main()
{
	double len_rec,brea_rec,area_rec,peri_rec;
	printf("\nEnter the Length of a Rectangle: ");
	scanf("%lf",&len_rec);
	
	printf("\nEnter the Breadth of a Rectangle: ");
	scanf("%lf",&brea_rec);
	
	area_rec=len_rec*brea_rec;
	printf("\nThe Area of a Rectangle is: %.1lf",area_rec);
	
	peri_rec=2*(len_rec+brea_rec);
	printf("\nThe Perimeter of a Rectangle is: %.1lf",peri_rec);
	
	if(area_rec>peri_rec)
	printf("\nThe Area of a Rectangle is Greater than its perimeter: ");
	else
	printf("\nThe Area of a Rectangle is Not Greater than its perimeter: ");
}
