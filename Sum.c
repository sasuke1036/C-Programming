//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x=1;
	int sum=0;

	while(x<11)
	{
		printf("Enter the value of x : ");
		scanf("%d",&x);

		sum+=x;
	}

	printf("The sum is = %d",sum);
	return 0;
}