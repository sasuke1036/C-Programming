//Libraries
#include <stdio.h>

//Main Function

int main()
{
	int product,quantity_sold;
	int qty1=0,qty2=0,qty3=0,qty4=0,qty5=0;

	float a=0,b=0,c=0,d=0,e=0,total=0;

	printf("Enter the product number : ");
	scanf("%d",&product);

	while(product !=-1)
	{
		printf("Enter the value of quantity_sold : ");
		scanf("%d",&quantity_sold);


		switch(product)
		{
			case 1:
			qty1 += quantity_sold;
			a += quantity_sold*2.98;
			break;

			case 2 :
			qty2 += quantity_sold;
			b += quantity_sold*4.50;
			break;

			case 3 :
			qty3 += quantity_sold;
			c += quantity_sold*9.98;
			break;

			case 4 :
			qty4 += quantity_sold;
			d += quantity_sold*4.49;
			break;

			case 5 :
			qty5 += quantity_sold;
			e += quantity_sold*6.87;
			break;

			default :
			printf("Invalid input\n");
			break;
		}
		printf("Enter the product number : ");
		scanf("%d",&product);
	}

	total = (float)a+b+c+d+e;
	printf("product\tquantity_sold\tprice\n");

	printf("Product1 : %d\t%.2f\n",qty1,a);
	printf("Product2 : %d\t%.2f\n",qty2,b);
	printf("Product3 : %d\t%.2f\n",qty3,c);
	printf("Product4 : %d\t%.2f\n",qty4,d);
	printf("Product5 : %d\t%.2f\n",qty5,e);

	printf("Total is %.2f\n",total);
	return 0;
}