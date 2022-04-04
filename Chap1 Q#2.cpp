#include<stdio.h>
int main()
{
	float Dis,m,ft,inch,cm;

	printf("\nEnter Distance b/w Two Cities (In Km): ");
	scanf("%f",&Dis);
	
	m=1000*Dis;					//1Km = 1000 meter
	printf("\nThe Distance b/w Two Cities (In meter): %.3f",m);
	ft=3280.84*Dis;				//1Km = 3280.84 feet
	printf("\nThe Distance b/w Two Cities (In feet): %.3f",ft);
	inch=39370.1*Dis;			//1Km = 39370.1 inches
	printf("\nThe Distance b/w Two Cities (In inches): %.3f",inch);
	cm=100000*Dis;				//1Km = 100000 Centimeter
	printf("\nThe Distance b/w Two Cities (In Centimeter): %.3f",cm);
}
