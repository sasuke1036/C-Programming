//Libraries
#include <stdio.h>

//Main Function

int even(int x)
{
	if(x%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int x,i;

	for(i=1;;i++)
	{
		printf("Enter the value of x : ");
		scanf("%d",&x);

		int eeven = even(x);

		if(eeven == 1)
		{
			printf("Number is even\n");
		}
		else
		{
			printf("Number is odd\n");
		}
	}
	return 0;
}

