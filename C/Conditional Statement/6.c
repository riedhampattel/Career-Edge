#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("\n%c is an Alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\nis a number",ch);
	}
	else
	{
		printf("\n%c is a special character",ch);
	}
	
	return 0;
}
