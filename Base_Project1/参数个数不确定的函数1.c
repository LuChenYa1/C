#include<stdio.h>
#include<stdarg.h>

void fun(int m, ...)
{
	va_list cssz;
	va_start(cssz, m);
	printf("%d  ",va_arg(cssz, int));
	printf("%d  ",va_arg(cssz, int));
	printf("%d  \n",va_arg(cssz, int));
}

void fun1(int m, ...)
{
	va_list cssz;
	va_start(cssz, m);
	printf("%lf  ", va_arg(cssz, double));
	printf("%d  ", va_arg(cssz, int));
	printf("%lf  ", va_arg(cssz, double));
	printf("%d   \n", va_arg(cssz, int));
}

int main(void)
{
	fun(3, 1, 2, 34);
	fun(3, 6, 4, 30);

	fun1(4, 1.223f, 23, 32.14,0);
	fun1(4, 1.666f, 45, 13.13,100);
	return 0;
}