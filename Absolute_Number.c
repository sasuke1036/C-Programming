// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int x;

	printf("Enter the value of x : ");
	scanf("%d",&x);

	if(x<0)
		printf("%d\n",-x);
	else
		printf("%d\n",x);
	return 0;
}