//Libraries
#include <stdio.h>

//Main Function

float Farenheit(float y)
{
	float farenheit;
	farenheit = (y*9)/5.0 + 32;
	return farenheit;
}

float Celsius(float x)
{
	float celsius;
	celsius = ((x-32)*5)/9.0;
	return celsius;
}

int main()
{
	float x,y,i;

	for(x=0;x<=100;x++)
	{
		float ffarenheit = Farenheit(x);
		printf("The temperature in farenheit is : %f\tThe temperature in celsius is : %f\n",ffarenheit,x);
	}
	for(y=32;y<=212;y++)
	{
		float ccelsius = Celsius(y);
		printf("The temperature in celsius is : %f\tThe temperature in farenheit is : %f\n",ccelsius,y);
	}
	return 0;
}
