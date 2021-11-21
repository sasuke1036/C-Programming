// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int weight;

	printf("Enter the value of Weight : ");
	scanf("%d",&weight);

	if(weight>=190)
	{
		printf("Heavyweight\n");
	}
	else if(weight<=189 && weight>=154)
	{
		printf("Middleweight\n");
	}
	else if(weight<=153 && weight>=122)
	{
		printf("Featherweight\n");
	}
	else if(weight<=121 && weight>=115)
	{
		printf("Bantamweight\n");
	}
	else if(weight<115)
	{
		printf("Flyweight\n");
	}

	return 0;
}