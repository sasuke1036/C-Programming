//Libraries
#include <stdio.h>

//Main Function

int gcd(int x,int y)
{
	int temp;
	while(y%x != 0)
	{
		temp = x;
		x = y%x;
		y = temp;
	}
	return x;
}

int main()
{
	int x,y,i;

	for(i=1;;i++)
	{
		printf("Enter the value of x : ");
		scanf("%d",&x);

		printf("Enter the value of y : ");
		scanf("%d",&y);

		int Ggcd = gcd(x,y);
		printf("The greatest common divisor is %d\n",Ggcd);
	}
	return 0;
}