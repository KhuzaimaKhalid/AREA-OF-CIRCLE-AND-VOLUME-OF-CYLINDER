  /* Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user.*/
#include<stdio.h>

int main()
{
	printf("\t  AREA OF A RECTANGLE CALCULATOR \n");
	int l,b;    // length , breadth
	printf("\n Enter Length of Rectangle: ");
	scanf("%d", &l);
	printf("Enter Breadth of Rectangle: ");
	scanf("%d", &b);
	printf("The Area of Rectangle is %d", l*b);
	
	
	return 0;
}
