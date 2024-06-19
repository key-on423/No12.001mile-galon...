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
		printf("请输入行驶的公里路程：");
		while (scanf("%lf", &kilo) != 1)
		{
			
			while (getchar() != '\n')
				continue;
			printf("输入错误请重新输入!:");
			
		}
		printf("请输入行驶所消耗的油升量：");
		while (scanf("%lf", &oil) != 1)
		{
			printf("输入错误请重新输入:");
			while (getchar() != '\n')
				continue;
			
		}
	}
		if (modee == 1)
		{
			printf("请输入行驶的英里路程：");
			while (scanf("%lf", &kilo) != 1)
			{
				printf("输入错误请重新输入:");
				while (getchar() != '\n')
					continue;
				
			}
			printf("请输入行驶所消耗的加仑量：");
			while (scanf("%lf", &oil) != 1)
			{
				printf("输入错误请重新输入:");
				while (getchar() != '\n')
					continue;
				
			}
		}
	
}
void show_info()
{
	if (modee == 0)
		printf("油耗%.2lf升每一百公里\n", (oil / kilo) * 100);
	if (modee == 1)
		printf("油耗%.1lf加仑每英里\n", kilo/oil);

}
void set_mode(int mode)
{
	
	if (mode == 1)
	{
		printf("接下来程序将运行美制\n");
		modee = 1;
	}
	if (mode == 0)
	{
		printf("接下来程序将运行公制\n");
		modee = 0;
	}

	if (mode != 1 && mode != 0)
	{
		printf("没有%d这种模式，接下来按照模式1（美制）进行\n", mode);
		modee = 1;
	}
}