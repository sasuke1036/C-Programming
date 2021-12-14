//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x,product=1;

	for(x=1;x<=15;x+=2)
	{
		product*=x;
	}
	printf("Product is %d\n",product);
	return 0;
}