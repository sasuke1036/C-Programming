//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x,sum=0;

	for(x=2;x<=30;x+=2)
	{
		sum+=x;
	}

	printf("Sum is %d\n",sum);
	return 0;
}