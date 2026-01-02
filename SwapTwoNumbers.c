#include<stdio.h>
main()
{
	int a,b,t;
	printf("enter a value for a:");
	scanf("%d",&a);
	printf("enter a value for b:");
	scanf("%d",&b);
	printf("before swap:");
	printf("first number=%d,",a);
	printf("second number=%d",b);
	t=a;
	a=b;
	b=t;
	printf("\nafter swap:");
	printf("first number=%d,",a);
	printf("second number=%d",b);
}
