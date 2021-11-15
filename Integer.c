// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int x;

	printf("Enter the value of x : ");
	scanf("%d",&x);

	if(x%2 == 1)
		printf("odd\n");
	else
		printf("even\n");
	return 0;
}