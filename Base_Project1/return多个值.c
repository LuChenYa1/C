//#include<stdio.h>
//#include<stdlib.h>
//
//int* fun1(void);
//void fun2(int a, double b);
//
//int main(void)
//{
//	int* a = fun1();
//	printf("%d,%d\n", a[0], *(a+1));               //a��ָ�룬*a=a[0],*(a+1)=a[1];
//
//	int i = 12; double j = 13.13;
//	fun2(i, j );
//	return 0;
//	printf("��ִ�и����");
//}
//
// int* fun1(void)
//{
//	/* int b[2] = { 4,6 };
//	 int* p1 = b;
//	 return p1;*/                           //warning C4172: ���ؾֲ���������ʱ�����ĵ�ַ: b�����ʲ����鷵�ؾֲ�/ջ��/��ʱ����
//
//	int* p = (int*)malloc(8);
//	if(p)
//	{
//		*p = 4;                            //����if���ж��Ƿ��ǿ�ָ�룬�ᱨ����C6011��ȡ����NULLָ�롮p�������á�
//		p[1] = 5; 
//	}
//	
//	return p;
//}
//
// void fun2(int a, double b)
// {
//	 printf("%d,%lf", a, b);
// }