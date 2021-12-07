//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int sales_person=1;
	float gross_sales=0,salary=0;

	while(sales_person<=3)
	{
		printf("Enter the value of gross_sales : ");
		scanf("%f",&gross_sales);

		salary = 200 + (9*gross_sales)/(100.0);
		++sales_person;
		printf("salary is %.2f\n",salary);
	}
	return 0;
}