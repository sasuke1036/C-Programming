//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int number,i,j;

	for(i=1;i<=5;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&number);

		if(number>=1 && number<=30)
		{
			for(j=1;j<=number;j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;

}