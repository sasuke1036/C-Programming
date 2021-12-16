//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

int main()
{
	int side1,side2,side3,result;


	for(side1=1;side1<500;side1++)
	{
		for(side2=1;side2<500;side2++)
		{
			for(side3=1;side3<500;side3++)
			{

				result = pow(side1,2) + pow(side2,2);

				if(result == pow(side3,2))
				{
					printf("%d\t %d\t %d\t",side1,side2,side3);
				}

			}
		}
	}

	return 0;
}