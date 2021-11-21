// Libraries
#include<math.h>
#include <stdio.h>

// Main Function

int main()
{
	int degree,y;

	printf("Enter the value of degree : ");
	scanf("%d",&degree);

	y = (sin(degree)*sin(degree) + cos(degree)*cos(degree))?1 : 0;

	printf("degree = %d\ny = %d\n",degree,y);
	return 0;
}