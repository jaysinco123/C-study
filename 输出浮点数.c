#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float f;
	f = 3.14;
	double d;            // ����˫���ȱ���
	d = 12.001234;       // ����˫���ȱ���
	printf("d ��ֵΪ %le", d);
	printf("%f\n%1f\n%10.2f\n%.1f\n%-.4f\n", f,f,f,f,f);
	return 0;
}