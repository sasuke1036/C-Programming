/*Conversion of temperature*/

//Libraries
#include <stdio.h>

//Main Function

int main()
{
	float fahrenheit_degree,centigrade_degree;

	printf("Enter the temperature in Fahrenheit Degree : ");
	scanf("%f",&fahrenheit_degree);

	centigrade_degree = (fahrenheit_degree - 32.0)*5/9.0;

	printf("Centigrade Degree = %f\n",centigrade_degree);
	return 0;
}