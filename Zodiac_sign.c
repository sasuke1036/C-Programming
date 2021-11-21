// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int date,month;
	
	printf("Enter the date : ");
	scanf("%d",&date);

	printf("Enter the month : ");
	scanf("%d",&month);

	if(1<=month && month<=12)
	{
		if(month ==12)
		{
			if(date>=22 && date<=31)
			{
				printf("Capricorn\n");
			}
			else if(date<22 && date>=1)
			{
				printf("Sagittarius\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
			
		else if(month ==11)
		{
			if(date<=21 && date>=1)
			{
				printf("Scorpio\n");
			}
			else if(date>=22 && date<=30)
			{
				printf("Sagittarius\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
		else if(month ==10)
		{
			if(date<=22 && date>=1)
			{
				printf("Libra\n");
			}
			else if(date>=23 && date<=31)
			{
				printf("Scorpio\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
		else if(month ==9)
		{
			if(date<=22 && date>=1)
			{
				printf("Virgo\n");
			}
			else if(date>=23 && date<=30)
			{
				printf("Libra\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}		
		else if(month ==8)
		{
			if(date<=22 && date>=1)
			{
				printf("Leo\n");
			}
			else if(date>=23 && date<=31)
			{
				printf("Virgo\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
		else if(month ==7)
		{
			if(date<=22 && date>=1)
			{
				printf("Cancer\n");
			}
			else if(date>=23 && date<=31)
			{
				printf("Virgo\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
		else if(month ==6)
		{
			if(date<=20 && date>=1)
			{
				printf("Gemini\n");
			}
			else if(date>=21 && date<=30)
			{
				printf("Cancer\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}		
		else if(month ==5)
		{
			if(date<=20 && date>=1)
			{
				printf("Taurus\n");
			}
			else if(date>=21 && date<=31)
			{
				printf("Gemini\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
		else if(month ==4)
		{
			if(date<=19 && date>=1)
			{
				printf("Aries\n");
			}
			else if(date>=20 && date<=30)
			{
				printf("Taurus\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}		
		else if(month ==3)
		{
			if(date<=19 && date>=1)
			{
				printf("Pisces\n");
			}
			else if(date>=20 && date<=31)
			{
				printf("Aries\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
		
		else if(month ==2)
		{
			if(date<=17 && date>=1)
			{
				printf("Aquarius\n");
			}
			else if(date>=18 && date<=29)
			{
				printf("Pisces\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}		
		else if(month ==1)
		{
			if(date<=19 && date>=1)
			{
				printf("Capricorn\n");
			}
			else if(date>=20 && date<=31)
			{
				printf("Aquarius\n");
			}
			else
			{
				printf("Invalid\n");
			}
		}
				
	}
	else
	{
		printf("Invalid\n");
	}

	return 0;
}