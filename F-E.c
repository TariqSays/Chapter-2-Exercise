#include<stdio.h>
#include<conio.h>
void main()
{
	
	int days;
	printf("Enter the Number of Days ");
	scanf("%d",&days);
	if(days>=1 && days<=5)
	{
		printf("Fine is 50 Paise");
	}
	else if(days>=6 && days<=10)
	{
		printf("Fine is 1 Rupee");
	}
	else if(days>10 && days<30)
	{
		printf("Fine is 5 Rupees");
	}
	else if(days>=30)
	{
		printf("Membership Cancelled");
	}
	getch();
}
