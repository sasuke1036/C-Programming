//Libraries
#include <stdio.h>

//Main Function

void min(int a,int b,int c)
{
	if(a<b && a<c)
	{
		printf("A is the smallest integer\n");
	}
	else if(b<a && b<c)
	{
		printf("B is the smallest integer\n");
	}
	else if(c<a && c<b)
	{
		printf("C is the smallest integer\n");
	}
}

int main()
{
	int a,b,c,i;

	for(i=1;;i++)
	{
		printf("Enter the value of a : ");
		scanf("%d",&a);

		printf("Enter the valueof b : ");
		scanf("%d",&b);

		printf("Enter the valueof c : ");
		scanf("%d",&c);

		min(a,b,c);
	}
	return 0;
}
