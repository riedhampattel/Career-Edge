//simple if...else
#include<stdio.h>
int main()
{
	int age;
	printf("\nEneter the age = ");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("\nYou are eligible for voting");
	}
	else
	{
		printf("\nYou are not eligible for voting");
	}
	return 0;
}