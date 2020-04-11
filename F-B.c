#include<stdio.h>
#include<conio.h>
void main()
{
	
	char x;
	printf("Enter Character");
	scanf("%c",&x);
	//printf("%c",x);
	if(x>=65 && x<=90)
	{
		printf("Capital Leter");
	}
	else if (x>=97 && x<=122)
	{
		printf("Small Case Letter");
	}
	else if(x>=48 && x<=57)
	{
		printf("Digit");
	}
	else if ((x>=0 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=127))
	{
		printf("Special Symbols");
	}

}
