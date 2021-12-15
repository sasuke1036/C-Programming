//Libraries
#include <stdio.h>

//Main Function

int main()
{
	long long int number,factorial=1,counter;

	printf("Enter the number : ");
	scanf("%lld",&number);

	for(counter=1;counter<=number;counter++)
	{
		factorial*=counter;
		
	}
	printf("%lld\t%lld\n",number,factorial);
	return 0;
}