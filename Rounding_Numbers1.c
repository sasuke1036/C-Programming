//Libraries
#include <stdio.h>
#include <math.h>
//Main Function


	int roundtointeger(float x)
	{
		return floor(x+0.5);
	}
	float roundtotenths(float x)
	{
  		return floor( x * 10 + .5) / 10;
	}
 
	float roundtohunderths(float x)
	{
    	return floor( x * 100 + .5) / 100;
	}
 
	float roundtothousandths(float x)
	{
    	return floor( x * 1000 + .5) / 1000;
	}


	int main()
	{
		int i;
		float x;

		for(i=1;;i++)
		{
			printf("Enter the value of x : ");
			scanf("%f",&x);

			int hroundtointeger = roundtointeger(x);
			printf("The original number is %f\nThe nearest integer is %d\n",x,hroundtointeger);

			float kroundtotenths = roundtotenths(x);
			printf("The number nearest to tenths place is %f\n",kroundtotenths);

			float qroundtohundreths = roundtohunderths(x);
			printf("The number nearest to hunderths place is %f\n",qroundtohundreths);
			float wroundtothousdanths = roundtothousandths(x);
			printf("The number nearest to thousandths place is %f\n",wroundtothousdanths);
		}

	return 0;
	}

	