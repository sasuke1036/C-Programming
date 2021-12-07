//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int account_no,holder=1;
	float past_balance=0,new_balance=0,charges=0,credits=0,credit_limit=0;

	while(holder<=3)
	{
		printf("Enter the account_no : ");
		scanf("%d",&account_no);

		printf("Enter the past_balance : ");
		scanf("%f",&past_balance);

		printf("Enter the charges : ");
		scanf("%f",&charges);

		printf("Enter the value of credits : ");
		scanf("%f",&credits);

		printf("Enter the value of credit_limit : ");
		scanf("%f",&credit_limit);

		new_balance = (past_balance + charges - credits);
		++holder;

		printf("Account No = %d\nCredit Limit = %f\nNew balance = %f\n",account_no,credit_limit,new_balance);
		if(new_balance>credit_limit)
		{
			printf("Credit limit is exceeded\n");
		}
		else
			printf("Credit limit is not exceeded\n");
	}
	return 0;
}