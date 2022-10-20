#include<stdio.h>

int main()
{
	float a = 1.1,b=1.105,c=1.11,d=1.115,e=1.12,s=5000;
	printf("investment=5000\n");
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (j == 1)
			{
				s = s * a;
				printf("%f\n",s );
			}
			
			if (j == 2)
			{
				s = s * b;
				printf("%f\n", s);
			}
					
			if (j == 3)
			{
				s = s * c;
				printf("%f\n", s);
			}
					
			if (j == 4)
			{
				s = s * d;
				printf("%f\n", s);
			}
					
			if (j == 5)
			{
				s = s * e;
				printf("%f\n", s);
			}
				
		}
	}
}