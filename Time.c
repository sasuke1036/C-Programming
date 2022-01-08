//Libraries
#include <stdio.h>
#include<math.h>
//Main Function

int time(int hour,int minute,int second)
{
	return (hour%12*3600 + minute*60 +second);
}

int main()

{	int hour,minute,second,a,b;

	printf("Enter the first time (00:00:00 - 24:00:00) : ");
	scanf("%d%d%d",&hour,&minute,&second);

	a = time(hour,minute,second);

	printf("Enter the second time (00:00:00 - 24:00:00) : ");
	scanf("%d%d%d",&hour,&minute,&second);
	
	b = time(hour,minute,second);

	printf("Difference in the times(in seconds) is : %lf\n",fabs(a-b));
	return 0;
}
