#include<stdio.h>
#include<conio.h>
void main()
{
	
	char hel_con;
	printf("Enter the Health Condition");
	printf("\nE-Excellent\n P-Poor  ");
	scanf("%c",&hel_con);
	
	int Age;
	printf("Enter the Age");
	scanf("%d",&Age);
	
	char resid;
	printf("Residency C For City -- V For Village");
	//resid = getchar();
	scanf(" %c",&resid);
	
	char gender;
	printf("\nEnter Gender F-Female -- M-Male");
	scanf(" %c",&gender);
	
	
	if(hel_con=='E' && (Age>=25 && Age<=35) && resid=='C' && gender=='M')
	{
		printf(" can be insured- the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs");
	}
	else if(hel_con=='E' && (Age>=25 && Age<=35) && resid=='C' && gender=='F')
	{
		printf(" can be insured- the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh. ");
	}
	else if(hel_con=='P' && (Age>=25 && Age<=35) && resid=='V' && gender=='M')
	{
		printf(" can be insured- the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. ");
	}
	else
	{
		printf("person can not be insured");
	}
}
