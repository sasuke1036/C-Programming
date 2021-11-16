//Libraries
#include <math.h>
#include <stdio.h>

//Main Function

int main()
{
	int x,y,radius,distance,a,p;

	printf("Enter the value of x : ");
	scanf("%d",&x);

	printf("Enter the value of y : ");
	scanf("%d",&y);

	printf("Enter the value of radius : ");
	scanf("%d",&radius);

	printf("Enter the value of a : ");
	scanf("%d",&a);

	printf("Enter the value of p : ");
	scanf("%d",&p);

	distance = sqrt( pow((x-a),2) + pow((y-p),2) );

	if(distance < radius)
		printf("Point lies inside the circle\n");
	else if(distance > radius)
		printf("Point lies outside the circle\n");
	else 
		printf("Point lies on the circle\n");

	return 0;
}