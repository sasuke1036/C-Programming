//Libraries
#include <math.h>
#include <stdio.h>

//Main Function

int main()
{
	float latitudes,longitudes,l1,l2,g1,g2,D;

	printf("Enter the value of l1 : ");
	scanf("%f",&l1);

	printf("Enter the value of l2 ; ");
	scanf("%f",&l2);

	printf("Enter the value of g1 : ");
	scanf("%f",&g1);

	printf("Enter the value of g2 : ");
	scanf("%f",&g2);

	latitudes = (l1,l2);
	longitudes = (g1,g2);

	D = 3963*acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));

	printf("D = %f\n",D);
	return 0;
}

