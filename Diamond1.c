//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int i,n,j;

	printf("Enter the number of rows in a Diamond(where 'n' is only odd number range(1-19)) : ");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{

		for(j=n;j>=i;j--)
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
	for(i=n;i>=1;i--)
	{

		for(j=n;j>=i;j--)
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