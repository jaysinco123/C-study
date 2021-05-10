#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float f;
	f = 3.14;
	double d;            // 声明双精度变量
	d = 12.001234;       // 定义双精度变量
	printf("d 的值为 %le", d);
	printf("%f\n%1f\n%10.2f\n%.1f\n%-.4f\n", f,f,f,f,f);
	return 0;
}