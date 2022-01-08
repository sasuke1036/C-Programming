//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

int reverse (int number, int size)
{
	int a,reverse=0,j;

	for(j=1;j<=size;j++)
	{
		a = number % 10;
		reverse += a*pow(10,(size-j));
		number = number/10;
	}
		
	return reverse;
}

int main()
{
	int number,i,size,rreverse;

	for (i=1;;i++)
	{
		printf("Enter the size of the number : ");
		scanf("%d",&size);

		printf("Enter the number : ");
		scanf("%d",&number);

		int rreverse = reverse(number,size);
		printf("Reversed number is :%d\n",rreverse);
	}
	
	return 0;
}

