/*Chapter No 2:
Question No 4:
According to the Gregorian calendar, it was Monday on the 
date 01/01/1900. If any year is input through the keyboard 
write a program to find out what is the day on 1st
January of this year. */

#include<stdio.h>
int main()
{
	int year,basic_y=1900,leap_y,remaining_y,total_day,day;
	
	printf("Enter Any Year: ");
	scanf("%d",&year);
	
	year=(year-1)-basic_y;  //find total year b/w basic year and input year.
	
	leap_y=year/4;			//find leap year.
	
	remaining_y=year-leap_y;//find those year who are not leap year.
	
	total_day=(remaining_y*365)+(leap_y*366)+1;//find total days of all year means from basic year 
									//to input year (leap year=366 day) (remaining year=365 days).
	day=total_day%7;	//find actual day.	
	
	if(day==0)
	printf("\nThe day on 1st janaury of this year is Monday:");
	else if(day==1)
	printf("\nThe day on 1st janaury of this year is Tuesday:");
	else if(day==2)
	printf("\nThe day on 1st janaury of this year is Wednesday:");
	else if(day==3)
	printf("\nThe day on 1st janaury of this year is Thursday:");
	else if(day==4)
	printf("\nThe day on 1st janaury of this year is Friday:");
	else if(day==5)
	printf("\nThe day on 1st janaury of this year is saturday:");
	else if(day==6)
	printf("\nThe day on 1st janaury of this year is Sunday:");	
}
