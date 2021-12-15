//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x,y,i,total=0;

	printf("Enter the number of values to be summed : ");
	scanf("%d",&y);

	for(i=1;i<=y;i++)
	{
		printf("Enter the value of number to be summed : ");
		scanf("%d",&x);

		total +=x;
	}
	printf("Total is %d\n",total);
	return 0;
}