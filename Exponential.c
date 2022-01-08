//Libraries
#include <stdio.h>

//Main Function

int integerpower (int base , int exponent)
{
	int n;
	int integerpower = 1;
	for(n=1;n<=exponent;n++)
	{
		integerpower *= base;
	}
	return integerpower;

}

int main()
{
	int base,exponent,i;

	for (i=1;i>=1;i++)
	{
		printf("Enter the value of base : ");
		scanf("%d",&base);

		printf("Enter the value of exponent : ");
		scanf("%d",&exponent);

		int iintegerpower = integerpower(base,exponent);
		printf("Power of the given system is %d\n",iintegerpower);
	}

	return 0;
}

