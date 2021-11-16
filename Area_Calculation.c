//Libraries
#include <math.h>
#include <stdio.h>

//Main Function

int main()
{
	int area_of_triangle,a,b,c,s;

	printf("Enter the value of a : ");
	scanf("%d",&a);

	printf("Enter the value of b : ");
	scanf("%d",&b);

	printf("Enter the value of c : ");
	scanf("%d",&c);

	s = (a+b+c)/2;
	area_of_triangle = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("area_of_triangle = %d\n",area_of_triangle);
	return 0; 
}