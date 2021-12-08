//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int working_hours=0,employees=1;
	float hourly_rate=0,salary=0;

	while(employees<=3)
	{
		printf("Enter the value of hours worked : ");
		scanf("%d",&working_hours);

		printf("Enter the value of hourly rate : ");
		scanf("%f",&hourly_rate);

		salary = working_hours*hourly_rate;
		++employees;

		if(working_hours>40)
		{
			salary = (working_hours*hourly_rate) + 0.5*hourly_rate;
		}
		else
		{
			salary = working_hours*hourly_rate;
		}

		printf("Employees Salary is %.1f\n",salary);
	}
	return 0;
}