/*Measurements of rectangle and circle*/

//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int length_of_rectangle,breadth_of_rectangle,radius_of_circle,perimeter_of_rectangle,area_of_rectangle;
	float area_of_circle,circumference_of_circle;

	printf("Enter the length of rectangle : ");
	scanf("%d",&length_of_rectangle);

	printf("Enter the breadth of rectangle : ");
	scanf("%d",&breadth_of_rectangle);

	printf("Enter the radius of circle : ");
	scanf("%d",&radius_of_circle);

	perimeter_of_rectangle = 2*(length_of_rectangle + breadth_of_rectangle);
	area_of_rectangle = length_of_rectangle*breadth_of_rectangle;

	circumference_of_circle = 2*3.14*radius_of_circle;
	area_of_circle = 3.14*radius_of_circle*radius_of_circle;

	printf("Perimeter of Rectangle = %d\nArea of Rectangle = %d\nCircumference of Circle = %.2f\nArea of Circle = %.2f\n",perimeter_of_rectangle,area_of_rectangle,circumference_of_circle,area_of_circle);
	return 0;
}