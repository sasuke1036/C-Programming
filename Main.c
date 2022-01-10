//Libraries
#include <stdio.h>

//Main Function

int main()
{
	 static int count=1;

	if(count >= 1)
	{
		printf("%d\n",count);
		count--;
		return main();
	}
	
	return 0;
}