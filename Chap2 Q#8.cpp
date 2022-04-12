/*Question No 8:
Find the absolute value of a number entered through the 
keyboard.*/

#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("\nEnter any Number: ");
	scanf("%d",&num);
	
	num=abs(num);
	printf("\n\nThe Absolute of a Number is: %d",num);
	
}
