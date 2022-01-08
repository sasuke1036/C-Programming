//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

long perfect (int number)
{
	float j;
	j = sqrt(number);

	if(j*j == number)
	{
		return j;
	}
	else
	{
		return floor(j);
	}

}

int main()
{
	int number,i;

	for(i=1;;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&number);

		long pperfect = perfect(number);

		printf(" root of the number is : %ld\n",pperfect);
	}
	return 0;
}

