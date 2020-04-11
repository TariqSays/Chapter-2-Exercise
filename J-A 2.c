#include<stdio.h>
#include<conio.h>
void main()
{
	
	char x;
	scanf("%c",&x);
	
	((x>=0 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=127)) ?printf("Special Symbol"):printf("not special symbol");
}

