#include<stdio.h>

void fun1(int a[], int nlength);              //int*p改为int p[];[]识别为*，参数内自动转换
void fun2(int p[][3], int hang, int lie);     //做参数时，可将指针改为数组形式，例int（*p）[3]改为int p[][3]   (二维）  
void fun3(int(*p)[3], int hang, int lie);    

// 主函数
int main(void)
{
	int a[3] = { 3,2,1 };
	while (a == &a)
	{
		printf("1");// a==&a
	}
	int b[2][3] = { {6,5,4},{3,2,1} };
	fun1(a, 3);
	fun2(b, 2, 3);
	fun3(b, 2, 3);
}
// 函数/
void fun1(int a[], int nlength)
{
	for (int i = 0; i < nlength; i++)
	{
		printf("%d\n", a[i]);
		printf("%p\n", a+i );// 用p+i才能得到正确的结果，p++是自增，对它本身有影响
	}
}

void fun2(int p[][3], int hang, int lie)// int p[][3]
{
	for (int m = 0; m < hang; m++)
	{
		for (int n = 0; n < lie; n++)
		{
			printf("%d,%zd\n", p[m][n],sizeof(p));
		}
	}
}

void fun3(int(*p)[3], int hang, int lie)//二维数组化特殊一维
{
	for (int x = 0; x < hang * lie; x++)
	{
		printf("%d\n", p[x]);
	}
}