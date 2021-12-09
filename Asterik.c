//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int counter=1,y=0;

	while(counter<=100)
	{
		y=counter%10;
		printf("*");

		if(y==0)
		{
			printf("\n");
		}
		counter++;
	}
return 0;
}