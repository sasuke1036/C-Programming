//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

int main()
{
	int side1,side2,side3,result;

	int n;
	printf("Enter the number till which do you want to find the pythogorean triplets: ");
	scanf("%d",&n);

	for(side1=1;side1<n;side1++)
	{
		for(side2=side1+1;side2<n;side2++)
		{
			for(side3=side2;side3<n;side3++)
			{
				result = pow(side1,2) + pow(side2,2);

				if(result == pow(side3,2))
				{
					printf("(%d,%d,%d)\n",side1,side2,side3);
				}

			}
		}
	}

	return 0;
}