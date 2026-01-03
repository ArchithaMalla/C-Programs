#include<stdio.h>
main()
{
	int a,b,r;
	float a1,a2;
	#define PI 3.14
	printf("Menu:\n");
	printf("1. Calculate Area of a Circle\n");
    printf("2. Calculate Area of a Square\n");            
	printf("3. Exit\n");
    printf("Enter your choice: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("enter the radius of the circle:");
	           scanf("%d",&r);
		       a1=PI*r*r;
		       printf("The area of the circle is %.3f",a1);break;
		case 2:printf("enter the side of the square:");
		       scanf("%d",&b);
		       a2=b*b;
		       printf("The area of the square is %.3f",a2);break;
		case 3:printf("Exit");
	}
}
