//#include<stdio.h>
////不使用全局变量
//void critic(int* n);
//
//int main()
//{
//	int units;
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//		critic(&units);
//	printf("You must have looked it up!\n");
//	return 0;
//}
//void critic(int* n)
//{
//	printf("No luck, my friend. Try again.\n");
//	scanf("%d", n);
//}


//2.在美国，通常以英里/加仑来计算油耗；在欧洲，以升/100公里来计算。下面是程序的一部分，提示用户选择计算模式（美制或公制）
//然后接受数据并计算油耗。
#include <stdio.h>
#include "pe12-2a.h"

int main()
{
	int mode;
	printf("输入 0 公制运算， 输入 1 美制运算: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("输入 0 公制运算， 输入 1 美制运算");
		printf("(输入 -1来退出): ");
		scanf("%d", &mode);
	}
	printf("结束.\n");
	return 0;
}
//如果用户输入了不正确的模式，程序想用户给出提示消息并使用上一次输入的正确模式。请提供pe12-2a.h头文件和pe12-2a.c源文件。源代码
//应定义3个具有文件作用域，内部链接的变量。一个表示模式，一个表示距离，一个表示消耗的燃料。get_info()函数根据用户输入的模式提示用户
//输入相应的数据，并将其存储到文件作用域的变量中。show_info()函数根据设置的模式计算并显示油耗。可以假设用户输入的都是数值数据5