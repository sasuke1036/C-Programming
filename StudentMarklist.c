	/*Student Marks calculation*/

//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int marks_in_chem,marks_in_mat,marks_in_phy,marks_in_cse,marks_in_ee,aggregate_marks;
	float percentage_marks;
	
	printf("Enter the marks in Chemistry : ");
	scanf("%d",&marks_in_chem);

	printf("Enter the marks in Maths : ");
	scanf("%d",&marks_in_mat);

	printf("Enter the marks in Physics : ");
	scanf("%d",&marks_in_phy);

	printf("Enter the marks in Computers Science : ");
	scanf("%d",&marks_in_cse);

	printf("Enter the marks in Electrical : ");
	scanf("%d",&marks_in_ee);

	aggregate_marks = marks_in_chem + marks_in_mat + marks_in_phy + marks_in_cse + marks_in_ee;
	percentage_marks = aggregate_marks/500.0*100;

	printf("Aggregate Marks = %d\nPercentage Marks = %f\n",aggregate_marks,percentage_marks);
	return 0;
}