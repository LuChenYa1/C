#include<stdio.h>
void fun1(void);
void fun2(void);                                    //�������δ���������,����ȫ������һ��


void main(void)
{
	//void��ʾ�޷���ֵ�Ͳ�����int��ʾ�У�
	fun1();                                         //fun==&fun,fun()==(&fun) ()
	void(*q)(void) = fun1;                          //�����˺���������
	q();
	//0xʮ����0�ˣ���0ʮ��
	//c�����У�������дvoid��ʾ��ȷ������������c++�в�д����û�в���

}
void fun1(void)
{
	printf("���ڴ�ӡ1  \n");
	fun2();                                    //���ѭ��
}
void fun2(void)
{
	printf("���ڴ�ӡ2  \n");
	fun1();
}

/* void fun1(void);
void fun2(int b[2]);

int a ;                           //����
int a = 4;                        //����                 ȫ�ֱ���


int main(void)
{
	fun1();
	int a = 3;                                  //�ֲ�����
	int b[2] = { 6,7 };
	printf("%d\n", a);
	fun1();
	{
		int a = 5;
	}
	printf("%d\n", a);
	fun2(&b);                                   //���ݲ�����ʵ�ʲ���
}

void fun1(void)
{
	int a = 2;
	printf("%d\n", a);
}

void fun2(int* b) ����int b[2]                  //��ʽ����
{
	printf("%d  ", b[0]);
	printf("%d  ", b[1]);
} */
