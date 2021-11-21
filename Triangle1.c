// Libraries
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

	if((side1 > side2 && side1 > side3)&&(side1<side2+side3))
	{
		printf("Traingle is valid\n");
	}
	else if ((side2 > side3 && side2 > side1)&&(side2 < side1+side3))
	{
		printf("Traingle is valid\n");
	}
	else if ((side3 > side1 && side3 > side2)&&(side3<side1+side2))
	{
		printf("Traingle is valid\n");
	}
	else
	{
		printf("Triangle is not valid\n");
	}
	return 0;
}