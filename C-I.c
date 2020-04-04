#include<stdio.h>
#include<conio.h>
void main()
{
	int l,w;
	printf("Enter the Length");
	scanf("%d%d",&l,&w);
	int a;
	a = l*w;
	int p;
	p = 2*(l+w);
	if(a>p)
	{
		printf("Area of Rectangle is Greater than Perimeter");
	}
	else
	{
		printf("Area of Rectangle is not Greater than Perimeter");
	}
}
