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
		printf("�����������µ�����\n");
		scanf("%d", &gamernum);
		if (gamernum > 100 || gamernum < 1)
		{
			printf("���ַ�ΧΪ1-100������������\n");
			continue;
		}
		if (gamernum > num)
		{
			printf("����ƫ��\n");
			continue;
		}
		else if (gamernum < num)
		{
			printf("����ƫС\n");
			continue;
		}
		else
		{
			printf("��ϲ���¶���\n");
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
		printf("��������Ϸѡ��:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			continue;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("���������������\n");
			continue;
		}
	} while (a);
	return 0;
}