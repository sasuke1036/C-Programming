// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int Selling_price,Cost_price;

	printf("Enter the value of Selling price : ");
	scanf("%d",&Selling_price);

	printf("Enter the value of Cost price : ");
	scanf("%d",&Cost_price);

	if(Selling_price>Cost_price)
	{
		printf("Profit = %d\n",Selling_price - Cost_price);
	}
	else
	{
		printf("Loss = %d\n",Cost_price - Selling_price);
	}
	return 0;
}