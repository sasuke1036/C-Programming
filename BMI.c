// Libraries
#include <stdio.h>

// Main Function

int main()
{
	float weight,height,bmi;

	printf("Enter the weight of the person(must be in kilograms) : ");
	scanf("%f",&weight);

	printf("Enter the height of the person(must be in metres) : ");
	scanf("%f",&height);

	bmi = (weight)/(height*height);

	printf("BMI = %f\n",bmi);

	if(bmi<15)
	{
		printf("Person comes under Starvation category\n");
	}
	else if(bmi>=15.1 && bmi<=17.5)
	{
		printf("Person comes under Anorexic category\n");
	}
	else if(bmi>=17.6 && bmi<=18.5)
	{
		printf("Person comes under Underweight\n");
	}
	else if(bmi>=18.6 && bmi<=24.9)
	{
		printf("Person comes under Ideal\n");
	}
	else if(bmi>=25 && bmi<=25.9)
	{
		printf("Person comes under Overweight\n");
	}
	else if(bmi>=30 && bmi<=30.9)
	{
		printf("Person comes under Obese\n");
	}
	else if(bmi>=40.0)
	{
		printf("Person comes under Morbidly Obese\n");
	}
	return 0;
}