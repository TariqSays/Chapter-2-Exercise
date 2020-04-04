#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter Year ");
	scanf("%d",&num);
	if (num%4==0)
	{
		printf(" Leap Year ");
	}
	else if (num%4!=0)
	{
		printf(" Not Leap Year ");
	}
	getch();
	
}

