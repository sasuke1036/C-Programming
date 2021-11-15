// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int Angle_X,Angle_Y,Angle_z;

	printf("Enter the value of Angle X : ");
	scanf("%d",&Angle_X);

	printf("Enter the value of Angle Y : ");
	scanf("%d",&Angle_Y);

	printf("Enter the value of Angle Z : ");
	scanf("%d",&Angle_z);

	if(Angle_X+Angle_Y+Angle_z==180)
		printf("Triangle is valid\n");
	else
		printf("Triangle is not valid\n");
	return 0;
}