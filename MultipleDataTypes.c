#include<stdio.h>
main()
{
	int age,GPA;
	char initial;
	printf("enter your age,initial, and GPA : ");
	scanf("%d %c %d",&age,&initial,&GPA);
	printf("Your detailes:");
	printf("\nage:%d\ninitial:%c\nGPA:%d",age,initial,GPA);
}
