#include<stdio.h>
main()
{
	int a,b,c;
	char operator;
printf("enter an operator:");
scanf("%c",&operator);	
printf("enter two operands:");
scanf("%d%d",&a,&b);
switch(operator)
{
	case '+':printf("%d+%d=%d",a,b,a+b);break;
	case '-':printf("%d-%d=%d",a,b,a-b);break;
	case '*':printf("%d*%d=%d",a,b,a*b);break;
	case '/':printf("%d/%d=%d",a,b,a/b);
}
}
