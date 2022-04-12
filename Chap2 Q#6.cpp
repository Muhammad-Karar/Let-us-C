/*Question No 5:
If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three.*/

#include<stdio.h>
int main()
{
	int age_Ram,age_Shyam,age_Ajay;
	printf("\nEnter The Age of Ram: ");
	scanf("%d",&age_Ram);
	
	printf("\nEnter The Age of Shyam: ");
	scanf("%d",&age_Shyam);
	
	printf("\nEnter The Age of Ajay: ");
	scanf("%d",&age_Ajay);
	
	if(age_Ram<age_Shyam&&age_Ram<age_Ajay)
	printf("\n\nRam is Yongest: ");
	
	else if(age_Shyam<age_Ram&&age_Shyam<age_Ajay)
	printf("\n\nShyam is Yongest: ");
	
	else
	printf("\n\nAjay is Yongest: ");
}
