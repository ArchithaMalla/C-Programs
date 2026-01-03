#include<stdio.h>
int main()
{
	int i,n,t;
	printf("enter the no of elements for the array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("The array is :");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
