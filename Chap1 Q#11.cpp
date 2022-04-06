/* Question # 11:
A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer.*/

#include<stdio.h>
int main()
{
	int p,q,r,s;
	
	printf("\nEnter Amount To be withdrawn in Hunderds: ");
	scanf("%d",&p);
	
	q=p/10;
	printf("\nThe Ten Notes is %d:",q);
	
	r=p/50;
	printf("\nThe Fifty Notes is %d:",r);
	
	s=p/100;
	printf("\n The Hundered Notes is %d:",s);
}
