#include<stdio.h>
main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>=0 && age<=12)
	{
		printf("You are a Child");
	}
	else if(age>=13 && age<=19)
	{
		printf("You are a Teen");
	}
	else if(age>=20 && age<=59)
	{
		printf("You are an Adult");
	}
	else
	{
		printf("You are a Senior");
	}
}
