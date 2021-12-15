//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x,i,sum=0;
	float avg=0;

	for(i=0;i>=0;i++)
	{
		printf("Enter the value of x : ");
		scanf("%d",&x);

		if(x == 9999)
		{
			break;
		}
		sum +=x;
	}
	avg = (float)sum/i;	
	printf("Avg is %.2f\n",avg);
	return 0;
}