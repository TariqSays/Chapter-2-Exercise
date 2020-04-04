#include<stdio.h>
#include<conio.h>
void main()
{
	
	int x,y;
	printf("Enter x,y coordinates");
	scanf("%d%d",&x,&y);
	
	
	if(x==0)
	{
		if(y==0)
		{
			printf("point lies at origin");
		}
		else
		{
			printf("point lies on y-axis");
		}
	}
	else
	{
		if(y==0)
		{
			printf("point lies on x-axis");
		}
	}
	
	getch();
}
