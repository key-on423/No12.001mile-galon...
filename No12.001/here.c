//#include<stdio.h>
////��ʹ��ȫ�ֱ���
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


//2.��������ͨ����Ӣ��/�����������ͺģ���ŷ�ޣ�����/100���������㡣�����ǳ����һ���֣���ʾ�û�ѡ�����ģʽ�����ƻ��ƣ�
//Ȼ��������ݲ������ͺġ�
#include <stdio.h>
#include "pe12-2a.h"

int main()
{
	int mode;
	printf("���� 0 �������㣬 ���� 1 ��������: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("���� 0 �������㣬 ���� 1 ��������");
		printf("(���� -1���˳�): ");
		scanf("%d", &mode);
	}
	printf("����.\n");
	return 0;
}
//����û������˲���ȷ��ģʽ���������û�������ʾ��Ϣ��ʹ����һ���������ȷģʽ�����ṩpe12-2a.hͷ�ļ���pe12-2a.cԴ�ļ���Դ����
//Ӧ����3�������ļ��������ڲ����ӵı�����һ����ʾģʽ��һ����ʾ���룬һ����ʾ���ĵ�ȼ�ϡ�get_info()���������û������ģʽ��ʾ�û�
//������Ӧ�����ݣ�������洢���ļ�������ı����С�show_info()�����������õ�ģʽ���㲢��ʾ�ͺġ����Լ����û�����Ķ�����ֵ����5