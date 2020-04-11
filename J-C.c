#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a,b,c,max;
	printf("Enter Numbers ");
	scanf("%d%d%d",&a,&b,&c);
	
	max = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("max number %d", max) ;
}
