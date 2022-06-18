#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    printf("\nPress 1 For Factorial of a Number: ");
    printf("\nPress 2 For Prime Number or Not: ");
    printf("\nPress 3 For Find Odd or Even: ");
    printf("\nPress 4 For Exit: ");
    printf("\n\nEnter One of Your Choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    	case 1:			//Block of Factorial:
    		{
    			int num,i;
    			unsigned long int factorial=1;
    			printf("\nEnter any Number: ");
    			scanf("%d",&num);
    			
    			for(i=1;i<=num;i++)
    				{
    					factorial=factorial*i;
					}
    			printf("\nFactorial of %d is %d ",num,factorial);
			}
			break;
		case 2:			//Block of Prime or Not:
			{
				int num,i;
				printf("\nEnter any Number: ");
    			scanf("%d",&num);
    			for(i=2;i<=num;i++)
    				{
    					if(num%i==0)
    					break;
    				}
    				if(i==num)
    				printf("\nThe Number You Enetred is Prime Number: ");
					else 
					printf("\nThe Nnumber You Entered is not a Prime Number: ");	
			}
			break;
		case 3:			//Block of Even or Odd:
			{
				int num,j;
				printf("\nEnter any Number: ");
				scanf("%d",&num);
				
				if(num%2==0)
				{
					printf("\nThe Number You Entered is Even: ");
				}
				else
					printf("\nThe Number You Entered is Odd: ");
			}
			break;
		case 4:			//Exit Block:
			{
				printf("\n\t\tThanks: ");
				printf("\n\tYou Exit this program: ");
			}
	}
    return 0;   
}


