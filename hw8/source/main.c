#include<stdio.h>

int main()
{
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			for (int a = 1; a <= 500; a++)
			{
				int b=i*i,c=(j*j)+(a*a);
				if (b == c)
				{
					printf("side1 : %d\n",j);
					printf("side2 : %d\n",a);
					printf("sloping side : %d\n",i);
				}
			}
		}
	}
}