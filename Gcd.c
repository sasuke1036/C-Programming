//Libraries
#include <stdio.h>

//Main Function

int GCD(int x,int y)
{
	if(y == 0)
	{
		return x;
	}
	else
	{
		return GCD(y,x%y);
	}
}

int main()
{
	int x,y,i;

	for(i=1;i<=3;i++)
	{
		printf("Enter the value of x : ");
		scanf("%d",&x);

		printf("Enter the value of y : ");
		scanf("%d",&y);

		int kgcd = GCD(x,y);
		printf("The greatest common divisor is %d\n",kgcd);
	}
	return 0;
}

