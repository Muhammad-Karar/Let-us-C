/*Chap3 Question # 2
Write a program to find the factorial value of any number
entered through the keyboard. 
*/
#include<stdio.h>
int main()
{
	int num,i,factorial=1;
	
	printf("\n\nEnter any Number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	printf("\n\nThe Factorial of a %d is %d:",num,factorial);
}
