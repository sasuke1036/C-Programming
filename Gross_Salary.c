/*Gross Salary Calculation*/

//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int basic_salary;
	float dear_allownace,house_rent,gross_salary;

	basic_salary = 30000;
	dear_allownace = 0.4*basic_salary;
	house_rent = 0.2*basic_salary;

	/*Formula for Gross Salary Calculation*/
	gross_salary = basic_salary-dear_allownace-house_rent;

	printf("Basic Salary = %d\nDear Allowance = %f\nHouse Rent = %f\nGross Salary = %f\n",basic_salary,dear_allownace,house_rent,gross_salary);
	return 0;
}