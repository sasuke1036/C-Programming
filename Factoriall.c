//Libraries
#include <stdio.h>

//Main Function

long long factorial(int number)
{
	if(number<=1)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number -1));
	}
}

int main()
{
	int number;

	for(number=0;number<=10;number++)
	{
		long long ffactorial = factorial(number);
		printf("%d! = %lld\n",number,ffactorial);
	}
	return 0;
}

