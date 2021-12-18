//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int i,j;

	for(i=1;i<=5;i++)
	{

		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1)
			{
				printf("*");
			}

			else
			{
				printf("**");
			}
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{

		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1)
			{
				printf("*");
			}

			else
			{
				printf("**");
			}
		}
		printf("\n");
	}
	return 0;
}