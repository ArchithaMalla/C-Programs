#include<stdio.h>
int main()
{
	int a[5];
	int i,large;
	
	for(i=0;i<5;i++)
	{
		printf("enter the elements for a[%d]:",i);
		scanf("%d",&a[i]);
    }
    large=a[0];
	for(i=1;i<5;i++)
	{
		if(large<a[i])
		{
			large=a[i];
		}
		
	}
	printf("the largest element = %d",large);
}
