//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int days=0,loans=1;
	float interest=0,principle=0,rate=0;

	while(loans<=3)
	{
		printf("Enter the value of principle : ");
		scanf("%f",&principle);

		printf("Enter the value of rate : ");
		scanf("%f",&rate);

		printf("Enter the value of loan days : ");
		scanf("%d",&days);

		interest = (principle*rate*days)/365;
		++loans;
		printf("The simple interest is %.2f\n",interest);
	}
	return 0;
}