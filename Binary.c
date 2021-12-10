//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

int main()
{
	int number,counter=0,decimal_equivalent=0,x,a;

	printf("Enter the number(digits should be only 0 and 1) : ");
	scanf("%d",&number);

	x=number;

	while(x>0)
	{
		a=x%10;
		x=x/10;
		decimal_equivalent += a*pow(2,counter);
		counter++;
	}
	printf("Decimal Equivalent %d\n",decimal_equivalent);
	return 0;
}