#include <stdio.h>
#include "pe12-2a.h"
double kilo;
double oil;
int modee;

void set_mode(int mode);
void get_info()
{
	if (modee == 0)
	{
		printf("��������ʻ�Ĺ���·�̣�");
		while (scanf("%lf", &kilo) != 1)
		{
			
			while (getchar() != '\n')
				continue;
			printf("�����������������!:");
			
		}
		printf("��������ʻ�����ĵ���������");
		while (scanf("%lf", &oil) != 1)
		{
			printf("�����������������:");
			while (getchar() != '\n')
				continue;
			
		}
	}
		if (modee == 1)
		{
			printf("��������ʻ��Ӣ��·�̣�");
			while (scanf("%lf", &kilo) != 1)
			{
				printf("�����������������:");
				while (getchar() != '\n')
					continue;
				
			}
			printf("��������ʻ�����ĵļ�������");
			while (scanf("%lf", &oil) != 1)
			{
				printf("�����������������:");
				while (getchar() != '\n')
					continue;
				
			}
		}
	
}
void show_info()
{
	if (modee == 0)
		printf("�ͺ�%.2lf��ÿһ�ٹ���\n", (oil / kilo) * 100);
	if (modee == 1)
		printf("�ͺ�%.1lf����ÿӢ��\n", kilo/oil);

}
void set_mode(int mode)
{
	
	if (mode == 1)
	{
		printf("������������������\n");
		modee = 1;
	}
	if (mode == 0)
	{
		printf("�������������й���\n");
		modee = 0;
	}

	if (mode != 1 && mode != 0)
	{
		printf("û��%d����ģʽ������������ģʽ1�����ƣ�����\n", mode);
		modee = 1;
	}
}