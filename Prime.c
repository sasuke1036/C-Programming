//Libraries
#include <stdio.h>

//Main Function

int prime(int number)
{
	int j;

	if(number == 2)
	{
		return 1;
	}

		for(j=2;j<=number-1;j++)
		{
			if( number%j == 0)
			{
				return 0;
			}
		}
		return 1;
}

int main()
{
	int number,pprime;

	for(number=2;number<=10000;number++)
	{
		int pprime = prime(number);
		if(pprime == 1)
		{
			printf("%d\n",number);
		}
	}
	return 0;
}

