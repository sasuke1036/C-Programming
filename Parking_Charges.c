//Libraries
#include <stdio.h>

//Main Function

float calculatecharges(float hours)
{
	float charges;
	float h = hours;
	charges = 2;
	if(h>0 && h<=3)
	{
		return charges;
	}

	else if(h<24)
	{
		charges += 0.5*(h-3);
		return charges;
	}
	else if(h == 24)
	{
		charges = 10;
		return charges;
	}

}

int main()
{
	int customer;
	float total=0,hours;
	for(customer=1;customer<=3;customer++)
	{
		printf("Enter the number of hours : ");
		scanf("%f",&hours);
		
		float eachCustomerCharge = calculatecharges(hours);
		printf("Charge for customer %d is %f\n", customer, eachCustomerCharge);

		total += eachCustomerCharge;
	}
	printf("The total charges : %f", total);

	return 0;
}



