#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a,b;
	printf("Enter Percent in Subject A , B ");
	scanf("%d%d",&a,&b);
	
	if((a>=55 && b>=45) || (a>=45 && b>=55))
	{
		printf("Pass ");
	}
	else if(b<45 && a>=65)
	{
		printf("Allowed to Reappear");
	}
	else
	{
		printf("Fail");
	}
	getch();
	
}
