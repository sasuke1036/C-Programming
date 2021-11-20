//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int Five_digit_number,a,Reverse_digit;

	printf("Enter the value of Five_digit_number : ");

	scanf("%d",&Five_digit_number);

	a = Five_digit_number;
	Reverse_digit = (a%10)*10000;
	a /= 10;
	
	Reverse_digit += (a%10)*1000;
	a /= 10;
	
	Reverse_digit += (a%10)*100;
	a /= 10;
	
	Reverse_digit += (a%10)*10;
	a /= 10;
	
	Reverse_digit += a;

	if (Reverse_digit==Five_digit_number)
	{
		printf("Equal\n");
	}
	else
	{
		printf("Not Equal\n");
	}

	return 0;
}