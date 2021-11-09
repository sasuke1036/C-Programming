//Libraries
#include <math.h>
#include <stdio.h>

//Main Function

int main()
{
	float angle;

	printf("Enter the value of angle : ");
	scanf("%f",&angle);
	printf("sin(x) = %f\ncos(x) = %f\ntan(x) = %f\n",sin(angle),cos(angle),tan(angle));
	return 0;
}