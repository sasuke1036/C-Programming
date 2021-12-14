//Libraries
#include <stdio.h>

//Main Function

int main()
{

	float avg=0,numbers,sum=0;

	printf("Enter the five numbers : ");
	scanf("%f%f%f%f%f",&numbers,&numbers,&numbers,&numbers,&numbers);

	sum+=numbers;

	avg=(sum)/5;

	printf("Avg is %.2f\n",avg);
	return 0;
}