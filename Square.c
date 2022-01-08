//Libraries
#include <stdio.h>

//Main Function

void print_shape(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}

		printf("\n");
	}	
}

int main()
{
	int n;

	printf("Enter the size of the square : ");
	scanf("%d",&n);

	print_shape(n);
	return 0;
}