#include<stdio.h>

int main()
{
	printf("(A)\n");
	int i=1, j=1;
	for (i=1; i <= 10; i++)
	{
		for (j=1; j <= 10; j++)
		{
			if (j <= i)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= 11-i)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j < i)
			{
				printf(" ");
			}
			if(j>=i)
				printf("%s", "*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= 10 - i)
			{
				printf(" ");
			}
			if (j > 10 - i)
				printf("*");
		}
		printf("\n");
	}
}