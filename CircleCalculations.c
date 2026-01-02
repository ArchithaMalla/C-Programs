#include<stdio.h>
main()
{
	float radius,area,circumference,PI;
	#define PI 3.14159
	printf("enter the radius of the circle:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	circumference=2*PI*radius;
	printf("For a circle with radius %.3f:",radius);
	printf("\nThe area is %.3f.",area);
	printf("\nThe circumference is %.3f.",circumference);
}
