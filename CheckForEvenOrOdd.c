#include<stdio.h>
main()
{
int x;
printf("enter an integer:",x);
scanf("%d",&x);
if(x%2==0)
{
	printf("%d is an even number",x);
}
else
{
	printf("%d is an odd number",x);
}
}
