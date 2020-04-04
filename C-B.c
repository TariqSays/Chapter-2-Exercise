#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter a Number ");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf(" Even Number ");
	}
	else if (num%2==1)
	{
		printf(" Odd Number ");
	}
	getch();
	
}
