//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

int main()
{
	int n;
	float pi=0.00;

	for(n=1;n>=1;n+=2)
	{
		pi += (float)4*(pow(-1,n+1)/(2*n-1));
		
		if(pi <= 4)
		{
			break;
		}
		n++;
	}

	printf("N = %d\n",n);
	return 0;

}