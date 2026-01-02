#include<stdio.h>
main()
{
int a,b,c,sum;
float avg;
printf("enter the first integer:");
scanf("%d",&a);
printf("enter the second integer:");
scanf("%d",&b);
printf("enter the third integer:");
scanf("%d",&c);
sum=a+b+c;
avg=(float)sum/3;
printf("The average of %d,%d and %d is %.2f.",a,b,c,avg);
}
