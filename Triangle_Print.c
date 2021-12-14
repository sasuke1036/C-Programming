//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x,a,b;

	printf("Enter the value of x : ");
	scanf("%d",&x);

	for(a=1;a<=x;a++)
	{
		for(b=9;b>=a;b--)
		{
			printf(" ");
		}
			for(b=1;b<=a;b++)
			{
				printf("*");
			}

		printf("\n");
	}

	return 0;

}