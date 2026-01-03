#include<stdio.h>
main()
{
	char ch;
	printf("enter a single character:");
	scanf("%c",&ch);
switch(ch)
{
	case 'a':printf("'a' is a vowel");break;
	case 'e':printf("'e' is a vowel");break;
	case 'i':printf("'i' is a vowel");break;
	case 'o':printf("'o' is a vowel");break;
	case 'u':printf("'u' is a vowel");break;
	case 'A':printf("'A' is a vowel");break;
	case 'E':printf("'E' is a vowel");break;
	case 'I':printf("'I' is a vowel");break;
	case 'O':printf("'O' is a vowel");break;
	case 'U':printf("'U' is a vowel");break;
	default :printf("'%c' is a consonent",ch);
}
}
