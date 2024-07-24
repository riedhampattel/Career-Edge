#include<stdio.h>
int main()
{
	int num1,num2;
	char ch;
	printf("\nPress '+' to perform addition");
	printf("\nPress '-' to perform subtraction");
	printf("\nPress '*' to perform multiplication");
	printf("\nPress '/' to perform division");
	printf("\nPress 'r' to perform remainder");
	printf("\nEnter your choice = ");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
			printf("\nEnter the value in num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value in num2 = ");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case '-':
			printf("\nEnter the value in num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value in num2 = ");
			scanf("%d",&num2);
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*':
			printf("\nEnter the value in num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value in num2 = ");
			scanf("%d",&num2);
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/':
			printf("\nEnter the value in num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value in num2 = ");
			scanf("%d",&num2);
			printf("\nThe division of %d and %d is %d",num1,num2,num1/num2);
		break;
		case 'r':
			printf("\nEnter the value in num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value in num2 = ");
			scanf("%d",&num2);
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		default : printf("\nInvalid input");
	}
	
	return 0;
}
