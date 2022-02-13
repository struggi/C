#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("1.play\n");
	printf("0.exit\n");
}

void game()
{
	int gamernum = 0;
	srand((unsigned int)time(NULL));
	int num = rand() % 101;
	while (1)
	{
		printf("请输入您所猜的数字\n");
		scanf("%d", &gamernum);
		if (gamernum > 100 || gamernum < 1)
		{
			printf("数字范围为1-100，请重新输入\n");
			continue;
		}
		if (gamernum > num)
		{
			printf("数字偏大\n");
			continue;
		}
		else if (gamernum < num)
		{
			printf("数字偏小\n");
			continue;
		}
		else
		{
			printf("恭喜您猜对了\n");
			break;
		}
	}
}

int main()
{
	int a = 0;
	do
	{
		menu();
		printf("请输入游戏选项:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("猜数字游戏\n");
			game();
			continue;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			continue;
		}
	} while (a);
	return 0;
}