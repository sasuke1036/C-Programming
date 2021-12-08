//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x=1;
	int sum=0;
	while(x<11)
	{
		sum+=x;
		x++;
	}

	printf("The sum is = %d",sum);
	return 0;
}