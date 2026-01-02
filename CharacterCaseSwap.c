#include<stdio.h>
main()
{
	char ch;
	printf("enter a lowercase letter:");
	scanf("%c",&ch);
	ch=ch-32;
	printf("the uppercase version is:%c",ch);
}
