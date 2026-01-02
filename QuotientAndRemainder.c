#include<stdio.h>
main()
{
	int divident,divisor,quotient,remainder;
	printf("enter the divident:");
	scanf("%d",&divident);
	printf("enter the divisor:");
	scanf("%d",&divisor);
	quotient=divident/divisor;
	remainder=divident%divisor;
	printf("when %d is divided by %d,the quotient is %d and the remainder is %d.",divident,divisor,quotient,remainder);
}
