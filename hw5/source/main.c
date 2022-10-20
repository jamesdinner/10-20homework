#include<stdio.h>

int main()
{
	int x, y;
	printf("x= : ");
	scanf("%d", &x);
	printf("y= : ");
	scanf("%d", &y);
	for (int i = 1; i <= y; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			if (i == 1 || i == y)
				printf("+");
			if (i>1&&i<y)
			{
				if (j == 1 || j == x)
					printf("+");
					else
					printf(" ");
			}
			
		}
		printf("\n");
	}
}