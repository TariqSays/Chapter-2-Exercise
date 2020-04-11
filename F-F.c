#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a,b,c;
	printf("Enter three sides of a triangle ");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a+b>c) && (a+c>b) && (b+c>a))
	{
		
		printf("Triangle is valid ");
	}
	else
	{
		printf("Triangle is not valid");
	}
	getch();
}
