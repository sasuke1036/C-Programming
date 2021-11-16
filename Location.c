// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int x,y;

	printf("Enter the value of x : ");
	scanf("%d",&x);

	printf("Enter the value of y : ");
	scanf("%d",&y);

	if(y==0 && x!=0)
		printf("Point lies on x-axis\n");

	else if(x==0 && y!=0)
		printf("Point lies on y-axis\n");
	
	else if (x==0 && y==0)
		printf("Point is origin\n");

	else
		printf("Points is not on co-ordinate axes\n");
	return 0;
}