#include<stdio.h>
int factorial(int);
int main()
{
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=factorial(n);
	printf("the factorial of %d is %d",n,result);
}
int factorial(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
	
}

