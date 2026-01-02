#include<stdio.h>
main()
{
	int age;
	char initial;
	float height;
	printf("enter your initial:");
	scanf("%c",&initial);
	printf("enter you age:");
	scanf("%d",&age);
	printf("enter you height in meters:");
	scanf("%f",&height);
	printf("profile created: ");
	printf("initial: %c, age: %d, height: %.3fm",initial,age,height);
}
