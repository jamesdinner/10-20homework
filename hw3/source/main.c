#include<stdio.h>

int main()
{
	while (1) {
		int principal,day;
		float rate,a,b;
		printf("enter loan principal : ");
			scanf("%d",&principal);
		printf("enter interest rate : ");
			scanf("%f",&rate);
			printf("enter term of the loan in days : ");
			scanf("%d", &day);
			b = principal * rate*day / 365;
			
			printf("the interest charge is : %f\n", b);
	}
}