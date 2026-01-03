#include<stdio.h>
main()
{
	int a,b;
	float c;
	printf("enter the purchase amount:$");
	scanf("%d",&a);
	if(a>100)
	{
		b=a*0.1;
		c=a-b;
		printf("After a 10 percent discount, your final amount is $%.3f",c);
	}
	else
	{
		printf("There is no discount,your final amount is $%d",a);
	}
}
