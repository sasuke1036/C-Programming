// Libraries
#include<math.h>
#include <stdio.h>

// Main Function

int main()
{
	int red,blue,green;
	float cyan,magenta,yellow,black,k,white;

	printf("Enter the value of red(value must be in between 0 and 255) : ");
	scanf("%d",&red);

	printf("Enter the value of blue(value must be in between 0 and 255) : ");
	scanf("%d",&blue);

	printf("Enter the value of green(value must be in between 0 and 255) : ");
	scanf("%d",&green);

	float r = (float)red/255.0;

	float g = (float)green/255.0;

	float b = (float)blue/255.0;

	if(r > g && r > b)
	{
		white = r;
	}
	else if(g > r && g > b)
	{
		white = g;
	}
	else if(b > r && b > g) 
	{
		white = b;
	}

	cyan = (float)(white-red/255)/white;
	magenta = (float)(white-green/255)/white;
	yellow = (float)(white-blue/255)/white;
	black = 1-white;

	if(red == 0 && blue == 0 && green == 0)
	{
		printf("value of cyan, magenta, yellow are equal to zero and value of k = 1\n");
	}
	else
	{
		printf("White = %f\nCyan = %f\nMagenta = %f\nYellow = %f\nBlack = %f\nk = %f\n", white, cyan, magenta, yellow, black, k);	
	}
	return 0;
}