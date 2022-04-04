#include<stdio.h>
int main()
{
	int basic,DA,HR,gross;
	printf("\nEnter Rameash's Basic salary: ");
	scanf("%d",&basic);
	
	DA=(40*basic)/100;
	printf("\nHis Dearness Allowance is: %d",DA);
	HR=(20*basic)/100;
	printf("\nHis House Rent is: %d",HR);
	
	gross=basic+DA+HR;
	printf("\nHis Gross pay is = %d",gross);
}
