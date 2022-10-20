#include<stdio.h>

int main()
{
	int code=0,hour,week,thing,amount;
	float money=0,sum=0;
	printf("managers wage : 5000/week\n");
	printf("hourly wokers wage : 100/hour\n");
	printf("commission wokers wage : 250+thing*0.057,thing/1000\n");
	printf("piecewokers wage : 20/thing amount\n");
	while (code != -1)
	{
		printf("enter employee code(-1,1~4) : ");
		scanf("%d", &code);
		switch (code)
		{
		case 1:
			printf("Manager work week : ");
			scanf("%d", &week);
			money = week * 5000;
			printf("Manager worker wage : %f\n", money);
			sum += money;
			break;
		case 2:
			printf("hourly wokers hour : ");
			scanf("%d", &hour);
			if (hour <= 40)
				{
					money = hour * 100;
					sum += money;
				}
			if (hour > 40)
				{
					hour -= 40;
					money = (40 * 100) + (hour * 150);
					sum += money;
				}
			printf("hourly wokers wage : %f\n",money);
			break;
		case 3:
			printf("commission wokers sell thing : ");
			scanf("%d", &thing);
			money = 250 + thing * 0.057;
			printf("commission wokers wage : %f\n", money);
			sum += money;
			break;
		case 4:
			printf("piecewokers sell thing amount : ");
			scanf("%d", &amount);
			money = 20 * amount;
			printf("piecewokers wage : %f\n", money);
			sum += money;
		default:
			break;
		}
	}
	printf("coast : %0.2f", sum);
}