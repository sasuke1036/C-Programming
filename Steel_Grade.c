//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int hardness,tensile_strength;

	float carbon_content;

	printf("Enter the value of hardness : ");
	scanf("%d",&hardness);

	printf("Enter the value of carbon_content : ");
	scanf("%f",&carbon_content);

	printf("Enter the value of tensile_strength : ");
	scanf("%d",&tensile_strength);

	if (hardness>50 && carbon_content<0.7 && tensile_strength>5600)
	{
		printf("Grade10\n");
	}
	else if (hardness>50 && carbon_content<0.7 && tensile_strength<=5600)
	{
		printf("Grade9\n");
	}
	else if(hardness<=50 && carbon_content<0.7 && tensile_strength>5600)
	{
		printf("Grade8\n");
	}
	else if (hardness>50 && carbon_content>=0.7 && tensile_strength>5600)
	{
		printf("Grade7\n");
	}
	else if ((hardness>50 && carbon_content>=0.7 && tensile_strength<=5600) || (hardness<=50 && carbon_content<0.7 && tensile_strength<=5600) || (hardness<=50 && carbon_content>=0.7 && tensile_strength>5600))
	{
		printf("Grade6\n");
	}
	else
	{
		printf("Grade5\n");
	}

	return 0;
}