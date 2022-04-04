#include<stdio.h>
int main()
{
	double length,breadth,radius,aor,por,aoc,coc;
	float pi=3.14;
	printf("\nEnter Lenght of Rectangle: ");
	scanf("%lf",&length);
	printf("\nEnter Breadth of a Rectanle: ");
	scanf("%lf",&breadth);
	printf("\nEnter Radius of a Circle: ");
	scanf("%lf",&radius);
	
	aor=length*breadth;				//Area of Rectangle (aor)
	por=2*(length+breadth);			//Perimeter of Rectangle (por)
	aoc=pi*radius*radius;			//Area of Circle (aoc)
	coc=2*pi*radius;				//Circumference of Circle (coc)
	
	printf("\nArea of Rectangle is = %.2lf\n",aor);
	printf("Perimeter of Rectangle is = %.2lf\n",por);
	printf("Area of Circle is = %.2lf\n",aoc);
	printf("Circumference of Circle is = %.2lf\n",coc);
}
