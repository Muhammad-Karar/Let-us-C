/* Question # 10:
In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number of 
illiterate men and women if the population of the town is 80,000.*/


#include<stdio.h>
int main()
{
	int men,lit,litm,litwm,total=80000,wmen,illitm,illitwm;
	
	men=(52*80000)/100;
	lit=(48*80000)/100;
	litm=(35*80000)/100;
	
	wmen=total-men;
	litwm=lit-litm;
	
	illitwm=wmen-litwm;
	printf("\nThe Total illetrate Women in Town is = %d",illitwm);
	illitm=men-litm;
	printf("\nThe Total illetrate Men in Town is = %d",illitm);	
		
}


