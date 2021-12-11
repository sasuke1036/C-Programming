//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int n,counter,factorial;

	
	printf("Enter the value of n : ");
	scanf("%d",&n);

	if(n == 0)
	{
		factorial = 1;
	}
	else
	{
		factorial = n;		
	}

	counter = n-1;

	while(counter>0)
	{
		factorial *= counter;
		counter--;
	}

	printf("%d\n",factorial);
	return 0;
}