// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int Calender_year;

	printf("Enter the value of Calender year : ");
	scanf("%d",&Calender_year);

	if(Calender_year%4 == 0)
		printf("Leap year\n");
	else
		printf("Not a leap year\n");
	return 0;
}