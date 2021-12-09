//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int number = 0,y;

	y = number%100000000;

	while(number<=300000000)
	{
		if(y == 0)
		{
			printf("The number is %d\n",number);
		}
		
		number++;
	}
	return 0;
}