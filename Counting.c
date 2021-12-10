//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int five_digit,a,b,c,d,e,k,counter=0;

	printf("Enter the Five digit number : ");
	scanf("%d",&five_digit);

	k = five_digit;

	while(k>0)
	{
		a = k%10;
		k = k/10;

		if(a==7)
		{
			counter++;
		}
	}

	printf("%d of sevens = %d\n",counter,five_digit);
	return 0;
}



