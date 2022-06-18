/* Chap4 Q#2:  Write a program which to find the grace marks for a student 
using switch. The user should enter the class obtained by the 
student and the number of subjects he has failed in.  
 
−  If the student gets first class and the number of subjects he 
failed in is greater than 3, then he does not get any grace. 
If the number of subjects he failed in is less than or equal 
to 3 then the grace is of 5 marks per subject. 
 
−  If the student gets second class and the number of subjects 
he failed in is greater than 2, then he does not get any 
grace. If the number of subjects he failed in is less than or 
equal to 2 then the grace is of 4 marks per subject. 
 
−  If the student gets third class and the number of subjects 
he failed in is greater than 1, then he does not get any 
grace. If the number of subjects he failed in is equal to 1 
then the grace is of 5 marks per subject.*/



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
