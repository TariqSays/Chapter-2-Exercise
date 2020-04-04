#include <stdio.h>
#include <conio.h>
void main()
{
	
	int x,y,r;
	printf("Enter the Coordinates x,y");
	scanf("%d%d",&x,&y);
	printf("Enter the Radius");
	scanf("%d",&r);
	int sum;
	sum = ((x*x)+(y*y));
	r=r*r;
	if(sum==r)
	{
		printf("points lies on the circle");
	}
	else if(sum<r)
	{
		printf("points lies inside the circle");
	}
	else if(sum>r)
	{
		printf("points lies outside the circle");
	}
	getch();
}
