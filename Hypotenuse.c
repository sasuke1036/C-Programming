//Libraries
#include <stdio.h>
#include <math.h>
//Main Function

double hypotenuse (double side1, double side2)
	{
		double hypotenuse;
		hypotenuse = sqrt(pow(side1,2)+pow(side2,2));
		return hypotenuse;
	}

int main()
{
	int i;
	double side1,side2;

	for(i=1;i<=3;i++)
	{
		printf("Enter the value of side1 : ");
		scanf("%lf",&side1);

		printf("Enter the value of side2 : ");
		scanf("%lf",&side2);

		double Hypotenuse = hypotenuse(side1,side2);
		printf("Hypotenuse is %lf\n",Hypotenuse);
	}
	
	return 0;
}

	