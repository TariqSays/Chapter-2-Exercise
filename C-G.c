#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a,b,c;
	printf("Enter the Angle a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("Triangle is Valid");
	}
	else
	{
		printf("Triangle is not Valid");
	}
}
