//Libraries
#include <stdio.h>

//Main Function

float qualitypoints(float average)
{
	if(average>=90 && average<=100)
	{
		return 4;
	}
	else if(average>=80 && average<=89)
	{
		return 3;
	}
	else if(average>=70 && average<=79)
	{
		return 2;
	}
	else if(average>=60 && average<=69)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int number_of_subjects,sum=0,i,marks;
	float average,qqualitypoints;

	printf("Enter the number of subjects : ");
	scanf("%d",&number_of_subjects);

	for(i=1;i<=number_of_subjects;i++)
	{
		printf("Enter the marks of subject : ");
		scanf("%d",&marks);

		sum += marks;

		average = sum/number_of_subjects;

		qqualitypoints = qualitypoints(average);
	}
	if(qqualitypoints == 4)
	{
		printf("Excellent\n");
	}
	else if(qqualitypoints == 3)
	{
		printf("Good\n");
	}
	else if(qqualitypoints == 2)
	{
		printf("bad\n");
	}
	else if(qqualitypoints == 1)
	{
		printf("Poor\n");
	}
	else
	{
		printf("Needs improvement\n");
	}

	return 0;
}

