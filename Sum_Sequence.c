//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int x,total=0;

	for(x=100;x<=500;x+=100){

		total+=x;
	}

	printf("Total is %d\n",total);
	return 0;
}