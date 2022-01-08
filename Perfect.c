//Libraries
#include <stdio.h>

//Main Function

void perfect(int number)
{
	int sum=0,j;

		for(j=1;j<number;j++)
		{
			if(number%j == 0)
			{
				sum +=j;
			}
			
		}
		if(number == sum)
		{
			printf("Perfect number is %d\n",number);
		}
}	

int main()
{
	int number;
	for(number=1;number<=1000;number++)
	{
		perfect(number);
	}
	return 0;
}

