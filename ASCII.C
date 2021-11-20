//Libraries
#include <stdio.h>

//Main Function

int main()
{
	char x;

	printf("Enter the value of x : ");
	scanf("%c",&x);

	int p = (int)x;

	if(p<=90 && p>=65)
	{
		printf("It's a Capital Letter\n");
	}
	else if(p>=97 && p<=122)
	{
		printf("It's a Small Letter\n");
	}
	else if(p>=48 && p<=57)
	{
		printf("It's a Single Number\n");
	}
	else
	{
		printf("It's a Special Symbol\n");
	}
	return 0;
}