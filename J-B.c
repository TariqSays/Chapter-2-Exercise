#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter Year to Check ");
	scanf("%d",&year);
	
	year%4==0 ? printf("Leap Year "):printf("Not Leap Year");
	
}
