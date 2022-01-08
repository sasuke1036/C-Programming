//Libraries
#include <stdio.h>
//Main Function

long long int power(long base, long exponent)
{
	if(exponent == 1)
	{
		return base;
	}

	else
	{
		return base*power(base,exponent-1);
	}
}

int main()
{
	long long int base,exponent,i;

	for(i=1;;i++)
	{
		printf("Enter the value of base : ");
		scanf("%lld",&base);

		printf("Enter the value of exponent : ");
		scanf("%lld",&exponent);

		long long int ppower = power(base,exponent);

		printf("Power of the the given number is %lld\n",ppower);
	}
	return 0;
}

