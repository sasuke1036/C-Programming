// Libraries
#include <stdio.h>

// Main Function

int main()
{
	float x1,x2,x3,y1,y2,y3,area;

	printf("Enter the value of x1 : ");
	scanf("%f",&x1);

	printf("Enter the value of x2 : ");
	scanf("%f",&x2);

	printf("Enter the value of x3 : ");
	scanf("%f",&x3);

	printf("Enter the value of y1 : ");
	scanf("%f",&y1);

	printf("Enter the value of y2 : ");
	scanf("%f",&y2);

	printf("Enter the value of y3 : ");
	scanf("%f",&y3);

	area = 1/2.0*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	
	if(area == 0)
		printf("point1,point2,point3 are collinear\n");
	else
		printf("point1,point2,point3 are not collinear\n");
	return 0;
}