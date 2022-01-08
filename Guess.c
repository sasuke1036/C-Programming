//Libraries
#include <stdio.h>
#include<stdlib.h>
//Main Function

int main()
{
	int i,j,number,flag;

	j = rand()%1001;

	for(i=1;;i++)
	{
		printf("I have a number between 1 and 1000\n Can you guess the number?\n");
		printf("Please type your first guess : ");
		scanf("%d",&number);

		if(j == number)
		{
			printf("Excellent ! You guessed the number !\n");

			if(i < 10)
			{
				printf("Either you know the secret or you got lucky!\n");
			}

			else if(i == 10)
			{
				printf("Ahah!You know the secret!\n");
			}

			printf("Would you like to try it again (say 1 if yes and 0 if no)\n");
			scanf("%d",&flag);
			
			if(flag == 1)
			{
				continue;
			}

			else if(flag == 0)
			{
				break;
			}
		}

		else if(j != number && number<j)
		{
			if(i>10)
			{
				printf("You should be able to do better!\n");
				break;
			}
			else
			{
				printf("Too low. Try again\n");
			}
		}

		else if(j != number && number>j)
		{
			if(i>10)
			{
				printf("You should be able to do better!\n");
				break;
			}
			else
			{
				printf("Too high. Try again\n");
			}
		}
	}
	return 0;

}