//Libraries
#include <stdio.h>
#include <math.h>
//Main Function

int main()
{
	int i,y;
	float x;
	for(i=1;i<=5;i++)
	{
		printf("Enter the value of x : ");
		scanf("%f",&x);

		y = floor(x+0.5);
		printf("The value of the original number is %.2f\nThe value of the rounded number is %d\n",x,y);
	}
	return 0;
}