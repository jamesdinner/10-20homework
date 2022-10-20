#include<stdio.h>

int main()
{
	while (1)
	{
float sale;
	printf("enter sales in dollars : ");
	scanf("%f",&sale);
	sale = sale * 0.09 + 200;
	printf("Salary is : $%f\n",sale);
	}
	
}