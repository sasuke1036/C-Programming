//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int N=1,a=0,b=0,c=0;

	while(N<=10)
	{
		a=10*N;
		b=100*N;
		c=1000*N;
		printf("N = %d\tA = %d\tB = %d\tC = %d\t",N,a,b,c);
		N++;
	}

	return 0;	
}