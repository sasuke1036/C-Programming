//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int counter=1,number=0,largest=0,second_largest=0;

	while(counter<=10)
	{
		printf("Enter the number : ");
		scanf("%d",&number);

		if(number>largest)
		{
			second_largest = largest;
			largest = number;
		}
		counter++;
	}

	printf("The largest number %d\nThe second largest number %d\n",largest,second_largest);
	return 0;
}