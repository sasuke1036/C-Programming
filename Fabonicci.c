//Libraries
#include <stdio.h>

//Main Function

 int Fabonicci(int number)
{
	int j;
	int result,a=0,b=1;
	if(number <= 1)
	{
		return number;
	}

	for(j=2;j<=number;j++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return b;
}

int main()
{
	 int number,i;

	for(i=1;;i++)
	{
		printf("Enter the number to find out the nth fabonicci number : ");
		scanf("%d",&number);

		 int Sfabonicci = Fabonicci(number);

		printf("%d\n",Sfabonicci);
	}
	return 0;
}

