//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int smallest,number=0,counter=1;

	while(counter<=10)
	{
		printf("Enter the number : ");
		scanf("%d",&number);

		if(number<smallest)
		{
			smallest = number;
		}
		counter++;
	}

	printf("Smallest number is %d\n",smallest);
	return 0;
}