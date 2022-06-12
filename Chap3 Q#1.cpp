/*Chap3 Question # 1 
Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not
work for fractional part of an hour.*/
#include<stdio.h>
int main()
{
	int	working_hr,ot_hour,ot_pay,per_hr=12,employee;
	
	printf("\n\nEnetr Working hour of Employee: ");
	scanf("%d",&working_hr);
	
	if(working_hr>40)
	{
		ot_hour=working_hr-40;
		ot_pay=ot_hour*per_hr;
		
		for(employee=1;employee<=10;employee++)
		{
			printf("\n\nThe Employee %d of overtime pay is that: %d",employee,ot_pay);
		}	
	}
	else
	printf("\n\n Soory your Working hour is limited: ");
	
}
