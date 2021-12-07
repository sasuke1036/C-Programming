//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int driver;
	float gallons,miles,y,total;

	gallons = 0;
	miles = 0;
	driver = 1;
	y = 0;
	total = 0;

	while(driver<=4)
	{
		printf("Enter the value of gallons : ");
		scanf("%f",&gallons);

		printf("Enter the value of miles : ");
		scanf("%f",&miles);

		y = miles/gallons;
		printf("y is %f\n",y);

		total+=y;
		++driver;
	}

	printf("Total is %f\n",total);
	return 0;
}