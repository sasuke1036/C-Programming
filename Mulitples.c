//Libraries
#include <stdio.h>

//Main Function

int multiple(int x, int y)
{
	if(y%x == 0)
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
	int x,y,i;

	for(i=1;i>=1;i++)
	{
		printf("Enter the value of x : ");
		scanf("%d",&x);

		printf("Enter the value of y : ");
		scanf("%d",&y);

		int mmultiple = multiple(x,y);
		
		if(mmultiple ==1)
		{
			printf("Second integer is a multiple of first\n");
		}
		else
		{
			printf("Second integer is not a multiple of first\n");
		}
	}
	return 0;
}

