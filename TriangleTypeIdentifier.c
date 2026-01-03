#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the three sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
	if(a==b && b==c && c==a)
	{
		printf("The triangle is equilateral");
	}
	else if(a==b || b==c || c==a)
	{
		printf("The triangle is isosceles");
	}
	else
	{
		printf("The triangle is scalene");
	}
    }
    else
    {
    printf("It does not form a triangle");
    }
}
