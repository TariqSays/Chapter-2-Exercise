#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a,b,c;
	printf("Enter three sides of Triangle ");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a==b) && (b==c))
	{
		printf("Triangle is Equilateral");
	}
	else if((a==b) || (a==c) || (b==c))
	{
		printf("Triangle is Isosceles");
	}
	else if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
	{
		printf("Right Angled Trianlge");
	}
	else if(a!=b!=c)
	{
		printf("Scalene Triangle");
	}
	getch();

}
