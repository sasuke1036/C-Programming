// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int Calender_year,days;

	printf("Enter the value of Calender year : ");
	scanf("%d",&Calender_year);

	if(Calender_year%4 == 0)
	{
		if(Calender_year%100 == 0)
		{
			if(Calender_year%400 == 0)
			{
				printf("Leap year\n");
			}
			else 
			{
				printf("Not a leap year\n"); 
			}	
		}	
		else
		{
			printf("leap year\n");
		}
	}
	else
	{

		printf("Not a leap year\n");
	}
	return 0;
}