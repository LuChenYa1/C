#include<stdio.h>

void fun1(int a[], int nlength);              //int*p��Ϊint p[];[]ʶ��Ϊ*���������Զ�ת��
void fun2(int p[][3], int hang, int lie);     //������ʱ���ɽ�ָ���Ϊ������ʽ����int��*p��[3]��Ϊint p[][3]   (��ά��  
void fun3(int(*p)[3], int hang, int lie);    

// ������
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
// ����/
void fun1(int a[], int nlength)
{
	for (int i = 0; i < nlength; i++)
	{
		printf("%d\n", a[i]);
		printf("%p\n", a+i );// ��p+i���ܵõ���ȷ�Ľ����p++������������������Ӱ��
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

void fun3(int(*p)[3], int hang, int lie)//��ά���黯����һά
{
	for (int x = 0; x < hang * lie; x++)
	{
		printf("%d\n", p[x]);
	}
}