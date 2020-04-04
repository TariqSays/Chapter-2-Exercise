#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter the Number");
	scanf("%d",&n);
	if(n<0)
	{
		n=n*(-1);
	}
	printf("absolute value is %d",n);
	getch();
}
