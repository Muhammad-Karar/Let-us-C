/* Question # 12:
If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item.*/

#include<stdio.h>
int main()
{
	float sel_p,t_p;
	float x,y,cost_p;
	printf("\nEnter the selling Price of 15 items: ");
	scanf("%f",&sel_p);
	printf("\nEnter the The TOtal Profit earned on them: ");
	scanf("%f",&t_p);
	
	x=sel_p/15;
	printf("\nSel Price of One Item = %.2f",x);
	
	y=t_p/15;
	printf("\nTotal Profit in One Item = %.2f",y);
	
	cost_p=x-y;
	printf("\nSo The Cost Price of One Item is = %.2f",cost_p);
	
}
