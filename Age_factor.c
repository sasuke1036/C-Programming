// Libraries
#include <stdio.h>

// Main Function

int main()
{
	int Age_of_Ram,Age_of_Ajay,Age_of_Shyam;

	printf("Enter the value of Age of Ram : ");
	scanf("%d",&Age_of_Ram);

	printf("Enter the value of Age of Shyam : ");
	scanf("%d",&Age_of_Shyam);

	printf("Enter the value of Age of Ajay : ");
	scanf("%d",&Age_of_Ajay);

	if(Age_of_Ram<Age_of_Shyam && Age_of_Shyam<Age_of_Ajay)
		printf("Ram is younger\n");
	else if(Age_of_Shyam<Age_of_Ram && Age_of_Ram<Age_of_Ajay)
		printf("Shyam is younger\n");
	else if(Age_of_Ajay<Age_of_Ram && Age_of_Ram<Age_of_Shyam)
		printf("Ajay is younger\n");
	return 0;
}