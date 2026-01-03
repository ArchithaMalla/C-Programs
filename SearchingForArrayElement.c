#include<stdio.h>
int main()
{
	int a[10];
	int i,key,c=10;
	for(i=0;i<10;i++)
	{
		printf("enter the value for a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("enter the search element:");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(key==a[i])
		{
			printf("the element found at %d position\n",i);
			break;
		}
	}
	if(key != a[i])
	printf("element is not found");
}
