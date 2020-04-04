#include<stdio.h>
#include<conio.h>
void main()
{
	int x1,y1;
	printf("Enter the First Point");
	scanf("%d%d",&x1,&y1);
	int x2,y2;
	printf("Enter the Second Point");
	scanf("%d%d",&x2,&y2);
	int x3,y3;
	printf("Enter the Third Point");
	scanf("%d%d",&x3,&y3);

   // if slopes of lines with any two point will be same , then they are co-linear
	// slope =>  y2-y1 / x2-x1
	// slope => y3-y1 / x3-x1
	
	int slope1, slope2;
	
	slope1 = y2-y1/x2-x1;
	slope2 = y3-y1/x3-x1;
	
	if(slope1 == slope2)
	{
		printf("All three points fall on line");
	}
	else
	{
		printf("doesn't fall ......");
	}
	getch();

}
