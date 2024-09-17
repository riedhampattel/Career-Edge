#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	int c = num1>num2 ? num1:num2; 
	printf("\n%d is the biggest number",c);
	
	return 0;
}
