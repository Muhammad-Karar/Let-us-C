/* Question # 6: 
Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D. */

#include<stdio.h>
int main()
{
	int C,D,X;			// X is a temperory variable.
	
	printf("\nEnter The value of C: ");
	scanf("%d",&C);
	printf("\nEnter The value of D: ");
	scanf("%d",&D);
	
	X=C;				// Now Interchange the value of C and D.
	C=D;
	D=X;
	printf("\nNow The Value of C is = %d",C);
	printf("\nNow The Value of D is = %d",D);
}
