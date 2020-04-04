#include<stdio.h>
#include<conio.h>
int main()
{
	int cost_price,sale_price;
	printf("Enter Cost Price");
	scanf("%d",&cost_price);
	printf("Enter Sale Price");
	scanf("%d",&sale_price);
	if(sale_price>cost_price)
	{
		printf("Profit %d ",sale_price-cost_price);
	}
	else if(cost_price>sale_price)
	{
		printf("Loss %d ",cost_price-sale_price);
	}
	getch();
}
