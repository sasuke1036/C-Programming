 //Libraries
#include <stdio.h>

//Main Function

int main()
{
	int Five_digit_number,a,b,c,d,e,k,Reverse_digit;

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

	Reverse_digit = a*10000+b*1000+c*100+d*10+e;
	if (Reverse_digit==Five_digit_number)

	{
		printf("Equal\n");
	}
	else
		printf("Not Equal\n");
	return 0;
}