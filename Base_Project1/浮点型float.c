#include<stdio.h>
#include<stdlib.h>

void main(void)
{              
	float a = 1.2333288999999f;            //输出1.2333289（后面乱码），是七位有效精度
	printf("%f\n", a);                     //默认六位小数，四舍五入
	printf("%.20f\n", a);                  //小数点后输出二十位
	float b = -1.2222222f;                 //4字节，只有float右值一定加f
    printf("%.10f\n", b);                  //七位精度，在第七位为精确值，八位有误，不遵循四舍五入
	double c = 2333.3456789123456789;      //8字节，16位精度
	printf("%.20lf\n", c);
	printf("%e", 0.0);                     //0.0不等于0
	//FLT_MAX、FLT_MIN、DBL_MAX查范围

	long double d = 2333.123456789123456789;//大于8字节，不常用，右值lf后缀可不加
	printf("%30.20lf\n", d);                //所有数字+小数点+前空格，-30则为后空格
	printf("%e \n %e \n %e\n  ", a, c, d);  //%e通用浮点型
	printf("%zd", sizeof(int*));
	int a[4];
	scanf_s("%d",a);
}

#include <stdio.h>
#define N 15

void displace(int a[], int n, int m)
{
    int i, t;
    for (i = 0; i < n; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
}

int main()
{
    int i;
    int st[N] = { 25,36,12,45,25,37,75,16,61,68,49,27,34,88,42 };
    ​displace(st, N, 6);
    for (i = 0; i < N; i++)
        ​printf("%4d", st[i]);
}
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, p = 1.0 / (a * b * c);
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	double sum = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("sum=%lf", sum);
}