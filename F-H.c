#include<stdio.h>
#include<conio.h>
void main()
{
	
	float hours;
	printf("Time Required For a Worker To Complete Job");
	scanf("%f",&hours);
	
	if(hours>=2 && hours<=3)
	{
		printf("Highly Efficient");
	}
	else if(hours>3 && hours<=4)
	{
		printf("Improve Speed");
	}
	else if(hours>4 && hours<=5)
	{
		printf("Training");
	}
	else if(hours>5)
	{
		printf("Worker has to leave the company");
	}
}
