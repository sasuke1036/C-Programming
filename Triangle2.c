// Libraries
#include<math.h>
#include <stdio.h>

// Main Function

int main()
{
	int side1,side2,side3;

	printf("Enter the value of side1 : ");
	scanf("%d",&side1);

	printf("Enter the value of side2 : ");
	scanf("%d",&side2);

	printf("Enter the value of side3 : ");
	scanf("%d",&side3);

	if(side1 == side2 ==side3)
	{
		printf("It's an Equilateral Triangle\n");
	}
	else if((side1 == side2) || (side2 == side3) ||(side3 == side1))
	{
		printf("It's an isosceles triangle\n");
	}
	else if((pow(side1,2)+pow(side2,2) == pow(side3,2)) || (pow(side2,2)+pow(side3,2) == pow(side1,2)) || (pow(side3,2)+pow(side1,2) == pow(side2,2)))
	{
		printf("It's a Right angle Triangle\n");
	}
	else
	{
		printf("It's a Scalene Triangle\n");
	}

	return 0;
}