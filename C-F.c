#include <stdio.h>
#include <conio.h>
void main()
{
	
	int ram, shyam, ajay;
	printf("Enter Ages of Ram, Shyam, Ajay");
	scanf("%d%d%d",&ram, &shyam, &ajay);
	
	if(ram>=shyam)
	{
		if(ram>=ajay)
		{
			printf("Ram is Youngest");
		}
		else
		{
			printf("Ajay is Youngest");
		}
	}
	else
	{
		if(shyam>=ajay)
		{
			printf("Shyam is Youngest");
		}
		else
		{
			printf("Ajay is Youngest");
		}
		
	}
	
	getch();
}
