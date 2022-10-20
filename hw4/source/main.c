#include<stdio.h>

int main()
{
	int hour,rate,a,b;
	printf("enter # of hours worked : ");
	scanf("%d",&hour);
	printf("enter hourly rate of walker : ");
	scanf("%d", &rate);
	if (hour < 40)
		printf("Salary is : %d", hour*rate);
	else
	{
	a = hour - 40;
	b = rate / 2;
	a = a * b;
	printf("Salary is : %d",hour*rate+a);
	}
	

}
