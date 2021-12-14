//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int number,factorial=1;

	printf("NUMBER\tFACTORIAL\n");

	for(number=1;number<=5;number++)
	{
		factorial*=number;
		printf("%d\t%d\n",number,factorial);
	}

	return 0;
}