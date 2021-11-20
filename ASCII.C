//Libraries
#include <stdio.h>

//Main Function

int main()
{
	char x;

	printf("Enter the value of x : ");
	scanf("%c",&x);

	int p = (int)x;

	printf("ASCII value of %c is %d\n",x,p);
	return 0;
}