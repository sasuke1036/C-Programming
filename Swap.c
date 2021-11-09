//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int C,D,k;

	printf("Enter the value of C : ");
	scanf("%d",&C);

	printf("Enter the value of D : ");
	scanf("%d",&D);

	k = C;
	C = D;
	D = k;

	printf("C = %d\nD = %d\n",C,D);
	return 0;
}