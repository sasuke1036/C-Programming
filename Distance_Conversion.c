	/*Distance calculation between two cities*/

//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int distance,distance_in_meters,distance_in_centimeters;

	printf("Enter the distance betrween two cities : ");
	scanf("%d",&distance);

	distance_in_meters = distance*1000;
	distance_in_centimeters = distance_in_meters*100;

	printf("Distance in km = %d\nDistance in meters = %d\nDistance in centimeters = %d\n",distance,distance_in_meters,distance_in_centimeters);
	return 0;
}