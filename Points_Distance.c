//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

double distance (double x1,double x2,double y1,double y2)
{
	return sqrt(pow((x1-y1),2) + pow((x2-y2),2));
}

int main()
{
	double x1,x2,y1,y2,i;

	for(i=1;;i++)
	{
		printf("Enter the value of x1 : ");
		scanf("%lf",&x1);

		printf("Enter the value of x2 : ");
		scanf("%lf",&x2);

		printf("Enter the value of y1 : ");
		scanf("%lf",&y1);

		printf("Enter the value of y2 : ");
		scanf("%lf",&y2);

		double Ddistance = distance(x1,x2,y1,y2);

		printf("Distance is %.2lf\n",Ddistance);
	}
	return 0;
}

