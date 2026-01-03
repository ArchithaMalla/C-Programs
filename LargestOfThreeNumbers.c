#include<stdio.h>
main()
{
	int x,y,z;
	printf("enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z)
	{
		printf("%d is the largest number",x);
	}
	else if(y>z)
	{
		printf("%d is the largest number",y);
	}
	else
	{
		printf("%d is the largest number",z);
	}
}
