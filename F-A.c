#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
 printf("Enter Any Year");
 scanf("%d",&year);
 if((year%100==0 && year%400==0) || (year%4==0))
 	printf("\n Leap Year");
 else
 	printf("Not Leap");
 getch();	
}
