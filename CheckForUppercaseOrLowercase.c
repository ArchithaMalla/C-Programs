#include<stdio.h>
main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("%c is an uppercase letter",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c is a lowercase letter",ch);
	}
	else
	{
		printf("%c is not an alphabet character",ch);
	}
}
