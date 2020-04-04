#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter Five Digit Number ");
	scanf("%d",&n);
	
	int a,b,c,d;
	int num = n;
	a = num /10000;
	num = num % 10000;
	b = num / 1000;
	num = num % 1000;
	c = num / 100;
	num = num % 100;
	d = num /10;
	num = num % 10;
	int s;
	s = ((num*10000)+(d*1000)+(c*100)+(b*10)+(a*1));
	if(s==n)
	{
		printf("Original and Reversed Number are Equal");
	}
	else
	{
		printf(" Not Equal ");
	}
}
