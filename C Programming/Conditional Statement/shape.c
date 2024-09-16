#include<stdio.h>
int main()
{
	int choice,side,b,l,w,h;
	float radius,area,height,base;
	printf("\n1.Circle");
	printf("\n2.Square");
	printf("\n3.Rectangle");
	printf("\n4.Cube");
	printf("\n5.Triangle");
	printf("\n6.Cylinder");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nEnter the radius of the circle = ");
			scanf("%f",&radius);
			area = 3.14 * (radius * radius);
			printf("\nArea of circle = %.2f",area);
		break;
		case 2:
			printf("\nEnter the side of the square = ");
			scanf("%d",&side);
			printf("\nArea of square is = %d",side*side);
		break;
		case 3:
			printf("\nEnter the value of length = ");
			scanf("%d",&l);
			printf("\nEnter the value of breadth = ");
			scanf("%d",&b);
			printf("\nArea of Rectangle is = %d",l*b);
		break;
		case 4:
			printf("\nEnter the value of length = ");
			scanf("%d",&l);
			printf("\nEnter the value of width = ");
			scanf("%d",&w);
			printf("\nEnter the value of height = ");
			scanf("%d",&h);
			printf("\nArea of cube is = %d",l*w*h);
		break;
		case 5:
			printf("\nEnter the value of base = ");
			scanf("%f",&base);
			printf("\nEnter the value of height = ");
			scanf("%f",&height);
			printf("\nArea of triangle is = %.2f",0.5*(base*height));
		break;
		case 6:
			printf("\nEnter the value of radius = ");
			scanf("%f",&radius);
			printf("\nEnter the value of height = ");
			scanf("%f",&height);
			printf("\nSurface area of cylinder is = %.2f",(2*3.14*radius*height) + (2*3.14*radius*radius));
		break;
		default :
			printf("\nInvalid Input");
	}
	
	return 0;
}
