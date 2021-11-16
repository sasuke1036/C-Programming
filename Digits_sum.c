//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int Five_digit_number,sum_of_five_digit_number,a,b,c,d,e,k;

	printf("Ener the value of Five_digit_number : ");
	scanf("%d",&Five_digit_number);

	k = Five_digit_number ;
	a = k%10;
	k = k/10;
	b = k%10;
	k = k/10;
	c = k%10;
	k = k/10;
	d = k%10;
	e = k/10;

	sum_of_five_digit_number = a+b+c+d+e;

	printf("Five_digit_number = %d\nsum_of_five_digit_number = %d\n",Five_digit_number,sum_of_five_digit_number);
	return 0;
}