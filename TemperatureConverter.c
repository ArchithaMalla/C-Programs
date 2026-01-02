#include<stdio.h>
main()
{
	float F,C;
	printf("enter temperature in celsius:");
	scanf("%f",&C);
	F=(C*9.0/5.0)+32;
	printf("%.2f degrees celsius is equals to %.2f degrees fahrenheit",C,F);
}
