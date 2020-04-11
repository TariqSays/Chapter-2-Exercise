#include<stdio.h>
#include<conio.h>
void main()
{
	
	int co,stock;
	char cred;
	printf("Enter the Stock ");
	scanf("%d",&stock);
	printf("Enter the Customer Order ");
	scanf("%d",&co);
	printf("Credit O-Ok or N-Not ");
	scanf(" %c",&cred);
	
	if(co<=stock && cred=='O')
	{
		printf("Supply ---");
	}
	else if (cred=='N')
	{
		printf("Intimation");
	}
	else if (cred=='O' && stock<co)
	{
		printf("Supply");
		printf("Intimation about Remaining Supply");
	}
	getch();
}
