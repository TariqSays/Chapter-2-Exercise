#include<stdio.h>
#include<conio.h>
void main()
{
	
	int hard,tensile;
	float carbon;
	printf("Hardness ");
	scanf("%d",&hard);
	printf("Carbon Content ");
	scanf("%f",&carbon);
	printf("Tensile Strength ");
	scanf("%d",&tensile);
	
	if(hard>50 && carbon<0.7 && tensile>5600)
	{
		printf("Grade 10");
	}
	else if(hard>50 && carbon<0.7 && tensile<=5600)
	{
		printf("Grade 09");
	}
	else if(hard<=50 && carbon<0.7 && tensile>5600)
	{
		printf("Grade 08");
	}
	else if(hard>50 && carbon>=0.7 && tensile>5600)
	{
		printf("Grade 07");
	}
	else if((hard>50 && carbon>=0.7 && tensile<=5600) || (hard<=50 && carbon>=0.7 && tensile>5600) || (hard<=50 && carbon<0.7 && tensile<=5600) )
	{
		printf("Grade 06");
	}
	else if (hard<=50 && carbon>=0.7 && tensile<=5600)
	{
		printf("Grade 05");
	}
	getch();
}
