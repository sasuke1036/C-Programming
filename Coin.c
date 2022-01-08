//Libraries
#include <stdio.h>
#include<stdlib.h>
//Main Function

int flip()
{
	int j = rand()%2;

	if(j == 1)
	{
		return 1;
	}
	else if(j == 0)
	{
		return 0;
	}
}

int main()
{
	int i,tails=0,heads=0,fflip;

	for(i=1;i<=100;i++)
	{		
		int fflip = flip();

		if(fflip == 1)
		{
			heads++;
		}
		else
		{
			tails++;
		}
		
	}
	printf("Number of heads tossed are %d\n",heads);
	printf("Number of tails tossed are %d\n",tails);

	return 0;
}

