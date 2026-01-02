#include<stdio.h>
main()
{
	float principal_amount,annual_interest_rate,interest;
	int time;
	printf("enter the principal_amount:");
	scanf("%f",&principal_amount);
	printf("enter the annual_interest_rate:");
	scanf("%f",&annual_interest_rate);
	printf("enter the time in years:");
	scanf("%d",&time);
	interest=(principal_amount*annual_interest_rate*time)/100;
	printf("the simple interest earned is %.2f",interest);
}
