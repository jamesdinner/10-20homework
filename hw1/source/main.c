#include<stdio.h>

int main()
{
	int account,charge,credit,limit;
	float balance;
	printf("enter account number : ");
	scanf("%d", &account);
	
	printf("enter beginning balance : ");
	scanf("%f", &balance);
	
	printf("enter total charges : ");
	scanf("%d", &charge);
	
	printf("enter total credits : ");
	scanf("%d", &credit);
	
	printf("enter credit limit : ");
	scanf("%d", &limit);
	
	printf("Account : %d\n",account);
	printf("credit limit : %d\n", limit);
	printf("Balance : %f\n", balance+charge- credit);
	balance = balance + charge- credit;
	if (limit < balance)
		printf("credit limit exceeded");
}