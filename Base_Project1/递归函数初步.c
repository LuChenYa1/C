#include<stdio.h>
#include<stdlib.h>
 
// �ݹ麯���������Ķ���ά����Ч�ʵͣ��ݹ����̫�����ױ�ջ��Ψһ�ŵ��Ǽ�࣬������
 
void fun(int a)                  //ѭ�����Ʊ���
{
	if (a > 0)                   //ѭ����������
	{
		printf("%d\n", a);       //ִ�����
		fun(a - 1);              //Ҳ������a--��ѭ�����Ʊ����ı仯
		printf("%d\n", a);       //54321,12345��ִ�е�a==0���������¡���������㣬��ʱa==1����ӡ1������������ӡ2345
	}
}

int fun1(int b)
{
	if (b == 1)
	{
		return 1;
	}
	else if (b == 2)
	{
		return 1;
	}
	else
	{
		return fun1(b - 1) + fun1(b - 2);
	}
}

int main(void)
{

	fun(5);
	int m;
	scanf_s("%d", &m);
	printf("%d\n", fun1(m));

	return 0;
}