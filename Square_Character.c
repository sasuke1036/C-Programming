//Libraries
#include <stdio.h>

//Main Function

void print_shape(int n,char j)
{
	int i,a;

	for(i=1;i<=n;i++)
	{
		for(a=1;a<=n;a++)
		{
			printf("%c",j);
		}

		printf("\n");
	}	
}

int main()
{
	int n;
	char j;
	printf("Enter the size of the square : ");
	scanf("%d",&n);

	printf("Enter the character of the design of the square : ");
	scanf(" %c",&j);

	print_shape(n,j);
	return 0;
}

