//ladder if...else
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		printf("\n%d is the biggest number",num1);
	}
	else if(num1==num2)
	{
		printf("\n%d and %d are equal numbers",num1,num2);
	}
	else
	{
		printf("\n%d is the biggest number",num2);
	}
	
	return 0;
}
