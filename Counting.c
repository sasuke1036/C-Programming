//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int number,k,counter=0;

	printf("Enter the number : ");
	scanf("%d",&number);

	k = number;

	while(k>0)
	{
		a = k%10;
		k = k/10;

		if(a==7)
		{
			counter++;
		}
	}

	printf("%d of sevens = %d\n",counter,number);
	return 0;
}
