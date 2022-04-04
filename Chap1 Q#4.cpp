#include<stdio.h>
int main()
{
	double temp,centigrade;
	
	printf("\nEnter Temperature in Fahrenheit: ");
	scanf("%lf",&temp);
	
	centigrade=(temp-32)*5/9;
	printf("\nSO Temperature in Centigrade is = %lf",centigrade);
}
