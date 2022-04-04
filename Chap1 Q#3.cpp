#include<stdio.h>
int main()
{
	int eng,math,phy,cs,urdu;
	int agre,total=500;
	float per;
	printf("\nEnter The Five Subject Marks:");
	printf("\n\n Enter Marks of English: ");
	scanf("%d",&eng);
	printf("\n Enter Marks of Maths: ");
	scanf("%d",&math);
	printf("\n Enter Marks of Physics: ");
	scanf("%d",&phy);
	printf("\n Enter Marks of CS: ");
	scanf("%d",&cs);
	printf("\n Enter Marks of Urdu: ");
	scanf("%d",&urdu);
	
	agre=eng+math+phy+cs+urdu;
	printf("\nAggregate = %d",agre);
	per=(agre*100)/total;
	printf("\nPercentage Marks = %.2f",per);
	
}
