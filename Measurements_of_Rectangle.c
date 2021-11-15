// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int Length_of_Rectangle,Breadth_of_Rectangle,Perimeter,Area;

	printf("Enter the value of Length_of_Rectangle : ");
	scanf("%d",&Length_of_Rectangle);

	printf("Enter the value of Breadth_of_Rectangle : ");
	scanf("%d",&Breadth_of_Rectangle);

	Area = Length_of_Rectangle*Breadth_of_Rectangle;
	Perimeter = 2*(Length_of_Rectangle+Breadth_of_Rectangle);

	if(Area>Perimeter)
		printf("Area of the rectangle is greater than the perimeter of the rectangle\n");
	else
		printf("Perimeter of the rectangle is greater than the area of the rectangle\n");
	return 0;
}