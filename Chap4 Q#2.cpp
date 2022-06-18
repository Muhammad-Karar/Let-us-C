#include<stdio.h>
int main()
{
	int student_class,no_of_subject;
	printf("\nEnter the Class of Student: ");
	scanf("%d",&student_class);
	printf("\nEnter the Number of Subjects he failed in: ");
	scanf("%d",&no_of_subject);
	
	switch(student_class)
	{
		case 1:
			{
				if(no_of_subject<=3)
				printf("\nThe Student get 5 grace marks in per Subject: ");
				else
				printf("\nThe Student does not get any grace marks : ");
			}
			break;
		case 2:
			{
				if(no_of_subject<=2)
				printf("\nThe Student get 4 grace marks in per Subject: ");
				else
				printf("\nThe Student does not get any grace marks : ");	
			}
			break;
		case 3:
			{
				if(no_of_subject==1)
				printf("\nThe Student get 5 grace marks in per Subject: ");
				else if(no_of_subject>1)
				printf("\nThe Student does not get any grace marks : ");
			}
			break;
		default:
			{
				printf("\nSoory!");
				printf("\nEnter Only 1st,2nd or 3rd Class: ");
			}
	}
	
}
